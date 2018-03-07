Budowanie programów
===================

Przykładowo:

```
g++ -std=c++11 -pthread program1.cpp -o program1.out 
```

Zadania
=======

1. Napisać program w którym wątki przyjmują kilka parametrów przy starcie (przykładowa sygnatura: `void foo(int a, double b)`)
2. Zmodyfikować `program4.cpp` tak, aby każdy wątek używał lokalnego akumulatora
3. Zmodyfikować `program6.cpp` tak, aby nie mogło w nim wystąpić zakleszczenie
4. Napisać program w którym jeden z wątków czyta słowa z dużego pliku i dorzuca do współdzielonego wektora. Dwa inne wątki powinny w nieskończoność sprawdzać czy wektor posiada jakieś słowa i jeśli tak, to pobierać jedno słowo i wyświetlać na ekran jego długość. Dostęp do wektora powinien odbywać się bezpiecznie wielowątkowo.
