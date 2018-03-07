#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

long long sum = 0;
std::mutex mx;

void foo()
{
  for (int i = 0; i < 1000000; i++)
    {
      std::lock_guard<std::mutex> lock(mx); // mx.lock()
      sum += 7;
    } // mx.unlock() - w destruktorze lock-a
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
