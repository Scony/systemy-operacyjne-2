Parzyści
========

1. Pobrać paczkę do testów: `$ wget http://ftp.gnu.org/gnu/coreutils/coreutils-8.27.tar.xz`
2. Rozpakować: `$ tar Jxf coreutils-8.27.tar.xz`
3. Napisać skrypt który przyjmuje ścieżkę do katalogu jako parametr oraz wykonuje na nim następujące akcje (każda za pomocą jednego find-a + wc):
  * wyświetla liczbę wszystkich katalogów
  * wyświetla liczbę wszystkich plików `.sh` oraz `.pl`
  * wyświetla liczbę wszystkich plików których nazwa składa się z dwóch liter
  * wyświetla liczbę wszystkich plików które mają w ścieżce katalog `src`
  * wyświetla liczbę wszystkich plików których nazwa **nie** zaczyna się na literę `b`
  * wyświetla liczbę wszystkich plików które zmodyfikowano w ostatnich 15 dniach
  * wyświetla liczbę wszystkich plików `.c` większych niż 100KB
  * wyświetla liczbę wszystkich plików wykonywalnych
  * wyświetla liczbę wszystkich plików z uprawnieniami 644

Nieparzyści
===========

1. Pobrać paczkę do testów: `$ wget http://ftp.gnu.org/gnu/coreutils/coreutils-8.27.tar.xz`
2. Rozpakować: `$ tar Jxf coreutils-8.27.tar.xz`
3. Napisać skrypt który przyjmuje ścieżkę do katalogu jako parametr oraz wykonuje na nim następujące akcje (każda za pomocą jednego find-a + wc):
  * wyświetla liczbę wszystkich plików
  * wyświetla liczbę wszystkich plików `.c` oraz `.h`
  * wyświetla liczbę wszystkich plików których nazwa zaczyna się na literę `a`
  * wyświetla liczbę wszystkich plików które mają w ścieżce katalog `lib`
  * wyświetla liczbę wszystkich plików których nazwa **nie** składa się z trzech liter
  * wyświetla liczbę wszystkich plików które zmodyfikowano ponad 15 dni temu
  * wyświetla liczbę wszystkich plików `.h` mniejszych niż 5KB
  * wyświetla liczbę wszystkich plików które **nie są** wykonywalne
  * wyświetla liczbę wszystkich plików z uprawnieniami 644

Dodatkowe (dla wytrwałych)
==========================

Napisać skrypt który przyjmuje ścieżkę do katalogu jako parametr oraz wyświetla statystykę ile plików z danym rozszerzeniem znajduje się w zadanym katalogu (można np użyć `find`, `tr`, `rev`, `cut`, `sort` oraz `uniq` w jednym potoku). Wynik powinien wyglądać mniej więcej tak:
```
    824 c
    590 sh
    406 m4
    352 h
    107 x
     59 pl
     44 po
     43 gmo
     12 mk
      6 texi
      6 in
      5 gperf
      4 sin
      3 valgrind
      3 pm
      3 ChangeLog-2007
      2 uniwidth
      2 unistr
      2 sed
      2 hin
      2 header
      2 GNUmakefile
      2 glthread
      2 am
      1 ylwrap
      1 y
      1 xpl

```