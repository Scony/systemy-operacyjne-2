Parzyści
========

Napisać następujące skrypty:
 * sortujący kolumnę liczb zawartą w pliku `$1` od najmniejszych do największych
 * wyświetlający zawartość pliku `$1` z ponumerowanymi liniami, ale tylko o numerach 20-30 (`cat`, `nl`, `head`, `tail`)
 * sumujący dwie kolumny liczb zawarte w pliku `$1` oraz wyświetlający kolumnę wynikową (`cat`, `while`, `read`, `echo`)
 * wyświetlający statystykę mówiącą ile procesów przypada na każdego użytkownika (UID) (`ps -elF`, `tr`, `cut`, `sort`, `uniq`) np:
```
      2 avahi
      1 colord
      1 kernoops
      2 mdm
      1 message+
      1 nobody
      1 nvidia-+
    101 root
      1 rtkit
     65 scony
      1 syslog
      1 UID
```

Nieparzyści
===========

Napisać następujące skrypty:
 * sortujący kolumnę liczb zawartą w pliku `$1` od największych do najmniejszych
 * wyświetlający zawartość pliku `$1` z ponumerowanymi liniami, ale tylko o numerach 15-45 (`cat`, `nl`, `head`, `tail`)
 * mnożący dwie kolumny liczb zawarte w pliku `$1` oraz wyświetlający kolumnę wynikową (`cat`, `while`, `read`, `echo`)
 * wyświetlający statystykę mówiącą ile różnych priorytetów (NI) występuje w danym momencie w systemie oraz ich ilości (`ps -elF`, `tr`, `cut`, `sort`, `uniq`) np:
```
      4 -
    141 0
      1 1
      1 -10
      1 -11
      1 19
     26 -20
      1 5
      1 NI
```

Zadanie dla wszystkich
======================
1. Pobrać paczkę do testów: `$ wget http://ftp.gnu.org/gnu/coreutils/coreutils-8.27.tar.xz`
2. Rozpakować: `$ tar Jxf coreutils-8.27.tar.xz`
3. Napisać skrypt który przyjmuje ścieżkę do katalogu jako parametr oraz wyświetla statystykę ile plików z danym rozszerzeniem znajduje się w zadanym katalogu (`find`, `tr`, `rev`, `cut`, `sort` oraz `uniq`). Wszystkie polecenia powinny tworzyć jeden potok. Wynik powinien wyglądać mniej więcej tak:
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
