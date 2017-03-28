Parzyści
========

Napisać następujące skrypty:
 * sortujący kolumnę liczb zawartą w pliku podanym przez parametr `$1` od najmniejszych do największych (`cat`, `sort`)
 * wyświetlający zawartość pliku podanym przez parametr `$1` z ponumerowanymi liniami, ale tylko o numerach 20-30 (`cat`, `nl`, `head`, `tail`)
 * sumujący dwie kolumny liczb zawarte w pliku podanym przez parametr `$1` oraz wyświetlający kolumnę wynikową (`cat`, `while`, `read`, `echo`)
 * filtrujący listę procesów tak aby pokazane zostały tylko procesy aktualnego użytkownika (`ps -elF`, `grep`, `whoami`) 
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
 * sortujący kolumnę liczb zawartą w pliku podanym przez parametr `$1` od największych do najmniejszych (`cat`, `sort`)
 * wyświetlający zawartość pliku podanym przez parametr `$1` z ponumerowanymi liniami, ale tylko o numerach 15-45 (`cat`, `nl`, `head`, `tail`)
 * mnożący dwie kolumny liczb zawarte w pliku podanym przez parametr `$1` oraz wyświetlający kolumnę wynikową (`cat`, `while`, `read`, `echo`)
 * filtrujący listę procesów tak aby pokazane zostały tylko procesy aktualnego użytkownika (`ps -elF`, `grep`, `whoami`) 
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

Bonus (na własnym laptopie)
===========================

 * zbadać jak działa `ps -elF` przy pomocy: `strace`, `ps -elF`, `grep`, `head`
 * wysłać HTTP request do strony `http://onet.pl` za pomocą: `cat`, `nc`, `ping`
 * postawić serwer www na porcie `80` i połączyć się do niego za pomocą przeglądarki (`nc`)
 * poćwiczyć gita: https://try.github.io/levels/1/challenges/1
 * stworzyć repo gitowe, zrobić kilka commitów, brancha, kilka commitów na branchu, merge do mastera i push do github-a (wszystkich branchy)
