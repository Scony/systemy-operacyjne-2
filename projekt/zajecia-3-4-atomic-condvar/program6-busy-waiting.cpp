#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <unistd.h>

int glob = 0;
std::mutex mx;

void foo()
{
  std::cout << "foo sleeping..." << std::endl;
  std::this_thread::sleep_for(std::chrono::seconds(2));

  std::cout << "foo waiting for 1337..." << std::endl;
  while (true)			// busy waiting - not effective
    {
      std::unique_lock<std::mutex> lock(mx);
      if (glob == 1337)
	break;
      std::this_thread::sleep_for(std::chrono::microseconds(1000)); // sleep a bit to relax CPU
    }

  std::cout << "foo done, glob: " << glob << std::endl;
}

void bar()
{
  std::cout << "bar notifying..." << std::endl;
  {
    std::unique_lock<std::mutex> lock(mx);
    glob = 1337;
  }

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
