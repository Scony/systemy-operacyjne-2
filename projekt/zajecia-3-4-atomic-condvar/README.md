Budowanie programów
===================

Przykładowo:

```bash
$ g++ -std=c++11 -pthread program1-mutex-sum.cpp -o program1.out
```

Zadania
=======

1. Porownac szybkosc sumowania pod `std::mutex` oraz za pomoca `std::atomic` (`program1-mutex-sum.cpp`, oraz `program2-atomic-sum.cpp`).
2. Przetestować działanie `notify_all()`.
3. Przerobic program z zadania 4 z poprzednich zajec, tak aby uzywal zmiennych warunkowych zamiast aktywnego czekania na rozmiarze wektora.
