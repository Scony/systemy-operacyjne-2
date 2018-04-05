#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

int glob = 0;
std::mutex mx;
std::condition_variable cv;

void foo()
{
  std::unique_lock<std::mutex> lock(mx);
  cv.wait(lock, []{ return glob == 1337; }); // while (glob != 1337) cv.wait(lock);
  std::cout << "foo done, glob: " << glob << std::endl;
}

void bar()
{
  {
    std::unique_lock<std::mutex> lock(mx);
    glob = 1337;
  }
  cv.notify_one();   // notify may be triggered without mutex acquired
}

int main()
{
  std::thread fooThread(foo);
  std::thread barThread(bar);

  fooThread.join();
  barThread.join();

  return 0;
}
