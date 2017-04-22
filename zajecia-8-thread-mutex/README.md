Budowanie programów
===================

Przykładowo:

```bash
$ g++ -std=c++11 -pthread program1.cpp -o program1.out 
```

Zadania
=======

1. Zmodyfikować `program4.cpp` tak, aby każdy wątek używał lokalnego akumulatora
2. Zmodyfikować `program6.cpp` tak, aby nie mogło w nim wystąpić zakleszczenie
3. Napisać program w którym jeden z wątków czyta słowa z dużego pliku i dorzuca do współdzielonego wektora. Dwa inne wątki powinny w nieskończoność sprawdzać czy wektor posiada jakieś słowa i jeśli tak, to pobierać jedno słowo i wyświetlać na ekran ilość bajtów w danym słowie. Dostęp do wektora powinien odbywać się bezpiecznie wielowątkowo.
