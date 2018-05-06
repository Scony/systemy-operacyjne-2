## Zadania dla osób o parzystym numerze albumu

1. Pobrać paczkę do testów: `wget http://ftp.gnu.org/gnu/coreutils/coreutils-8.27.tar.xz`
2. Rozpakować: `tar Jxf coreutils-8.27.tar.xz`
3. Napisać skrypt który przyjmuje ścieżkę do katalogu jako parametr oraz wykonuje na nim następujące akcje (każda za pomocą jednego `find` w potoku z `wc`):
  * wyświetla liczbę wszystkich katalogów
  * wyświetla liczbę wszystkich plików o rozszerzeniach `.sh` oraz `.pl`
  * wyświetla liczbę wszystkich plików które mają w ścieżce katalog `src`
  * wyświetla liczbę wszystkich plików których nazwa **nie** zaczyna się na literę `b`
  * wyświetla liczbę wszystkich plików `.c` większych niż 100KB
4. Napisać skrypt sortujący kolumnę liczb zawartą w pliku podanym przez parametr `$1` od najmniejszych do największych (`cat`, `sort`)
5. Napisać skrypt wyświetlający zawartość pliku podanego przez parametr `$1` z ponumerowanymi liniami, ale tylko o numerach 20-30 (`cat`, `nl`, `head`, `tail`)
6. Napisać skrypt filtrujący listę procesów tak aby pokazane zostały tylko procesy aktualnego użytkownika (`ps -elF`, `grep`, `whoami`)

## Zadania dla osób o nieparzystym numerze albumu

1. Pobrać paczkę do testów: `wget http://ftp.gnu.org/gnu/coreutils/coreutils-8.27.tar.xz`
2. Rozpakować: `tar Jxf coreutils-8.27.tar.xz`
3. Napisać skrypt który przyjmuje ścieżkę do katalogu jako parametr oraz wykonuje na nim następujące akcje (każda za pomocą jednego `find` w potoku z `wc`):
  * wyświetla liczbę wszystkich plików
  * wyświetla liczbę wszystkich plików o rozszerzeniach `.c` oraz `.h`
  * wyświetla liczbę wszystkich plików których nazwa zaczyna się na literę `a`
  * wyświetla liczbę wszystkich plików które **nie** mają w ścieżce katalogu `lib`
  * wyświetla liczbę wszystkich plików `.h` mniejszych niż 5KB
4. Napisać skrypt sortujący kolumnę liczb zawartą w pliku podanym przez parametr `$1` od największych do najmniejszych (`cat`, `sort`)
5. Napisać skrypt wyświetlający zawartość pliku podanego przez parametr `$1` z ponumerowanymi liniami, ale tylko o numerach 15-45 (`cat`, `nl`, `head`, `tail`)
6. Napisać skrypt filtrujący listę procesów tak aby pokazane zostały tylko procesy aktualnego użytkownika (`ps -elF`, `grep`, `whoami`) 
  
## Dodatkowe

Napisać skrypt który przyjmuje ścieżkę do katalogu jako parametr oraz wyświetla statystykę ile plików z danym rozszerzeniem znajduje się w zadanym katalogu (można np użyć `find`, `rev`, `cut`, `sort` oraz `uniq` w jednym potoku). Wynik powinien wyglądać mniej więcej tak:

```
    824 c
    590 sh
    405 m4
    352 h
    107 x
     59 pl
     43 po
     43 gmo
     12 mk
      6 texi
      6 in
      5 gperf
      4 sin
      3 valgrind
      3 pm
      2 sed
      2 hin
      2 header
      2 am
      1 y
      1 xpl
      1 vg-suppressions
      1 version
      1 timestamp
      1 tex
      1 tarball-version
      1 sub
      1 rpath
      1 prev-version
      1 pot
      1 output
      1 mailmap
      1 info
      1 guess
      1 conf
      1 charset
      1 cfg
      1 ac
      1 27
```

## Materiały

[http://www.zsk.iiar.pwr.wroc.pl/zsk/repository/dydaktyka/so/instrukcje/find.pdf](http://www.zsk.iiar.pwr.wroc.pl/zsk/repository/dydaktyka/so/instrukcje/find.pdf)

[http://www.zsk.iiar.pwr.wroc.pl/zsk/repository/dydaktyka/so/instrukcje/pipes2.pdf](http://www.zsk.iiar.pwr.wroc.pl/zsk/repository/dydaktyka/so/instrukcje/pipes2.pdf)
