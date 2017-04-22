#include <iostream>
#include <thread>
#include <vector>

long long sum = 0;

void foo()
{
  for (int i = 0; i < 1000000; i++)
    {
      sum += 7;
    }
}

int main()
{
  std::vector<std::thread> threads;

  for (int i = 0; i < 10; i++)
    threads.push_back(std::thread(foo)); // startuje nowy watek i wrzca do wektora

  for (auto& thread : threads) // for (int i = 0; i < 10; i++)
    thread.join();	       // threads[i].join();
  
  std::cout << sum << std::endl;

  return 0;
}
