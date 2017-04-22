#include <iostream>
#include <thread>
#include <chrono>

int glob = 1337;

void foo()
{
  std::this_thread::sleep_for(std::chrono::seconds(4)); // sleep(4);
  std::cout << "foo done " << glob << std::endl;
}

void bar()
{
  std::this_thread::sleep_for(std::chrono::seconds(2)); // sleep(2);
  std::cout << "bar done " << glob << std::endl;
  glob = 777;
}

int main()
{
  auto fooThread = std::thread(foo); // startuje dany watek
  auto barThread = std::thread(bar); // startuje dany watek

  fooThread.join();	     // blokuje az do zakonczenia danego watku
  barThread.join();	     // blokuje az do zakonczenia danego watku

  std::cout << "main done" << std::endl;

  return 0;
}
