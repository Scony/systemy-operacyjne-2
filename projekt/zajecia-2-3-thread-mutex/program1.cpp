#include <iostream>
#include <thread>

int glob = 1337;

void foo()
{
  std::cout << "foo done " << glob << std::endl;
}

void bar()
{
  std::cout << "bar done " << glob << std::endl;
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
