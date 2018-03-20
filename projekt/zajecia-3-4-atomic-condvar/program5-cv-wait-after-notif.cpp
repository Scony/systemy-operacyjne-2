#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>

int glob = 0;
std::mutex mx;
std::condition_variable cv;

void foo()
{
  std::cout << "foo sleeping..." << std::endl;
  std::this_thread::sleep_for(std::chrono::seconds(2));

  std::cout << "foo waiting..." << std::endl;
  std::unique_lock<std::mutex> lock(mx);
  cv.wait(lock);

  std::cout << "foo done, glob: " << glob << std::endl;
}

void bar()
{
  std::cout << "bar notifying..." << std::endl;
  {
    std::unique_lock<std::mutex> lock(mx);
    glob = 1337;
  }
  cv.notify_one();   // notify may be triggered without mutex acquired

  std::cout << "bar done" << std::endl;
}

int main()
{
  std::cout << "main starting threads..." << std::endl;

  std::thread fooThread(foo);
  std::thread barThread(bar);

  fooThread.join();
  barThread.join();

  std::cout << "main done" << std::endl;

  return 0;
}
