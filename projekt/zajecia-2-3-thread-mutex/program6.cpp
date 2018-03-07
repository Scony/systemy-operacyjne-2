#include <iostream>
#include <thread>
#include <mutex>

int resourceA = 1000000;
std::mutex resourceAGuard;

int resourceB = 1000000;
std::mutex resourceBGuard;

void foo()
{
  for (int i = 0; i < 100; i++)
    {
      resourceAGuard.lock();
      resourceBGuard.lock();

      resourceA -= 7;
      resourceB += 7;

      std::cout << "foo" << std::endl;

      resourceBGuard.unlock();
      resourceAGuard.unlock();
    }
}

void bar()
{
  for (int i = 0; i < 100; i++)
    {
      resourceBGuard.lock();
      resourceAGuard.lock();

      resourceA -= 7;
      resourceB += 7;

      std::cout << "bar" << std::endl;

      resourceAGuard.unlock();
      resourceBGuard.unlock();
    }
}

int main()
{
  auto fooThread = std::thread(foo); // startuje dany watek
  auto barThread = std::thread(bar); // startuje dany watek

  fooThread.join();	     // blokuje az do zakonczenia danego watku
  barThread.join();	     // blokuje az do zakonczenia danego watku

  std::cout << "main done" << std::endl;
  std::cout << "resourceA:" << resourceA << std::endl;
  std::cout << "resourceB:" << resourceB << std::endl;

  return 0;
}
