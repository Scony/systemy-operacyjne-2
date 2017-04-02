Parzyści
========

1. Pobrać paczkę do testów: `$ wget https://github.com/google/guetzli/archive/master.zip`
2. Rozpakować: `$ unzip master.zip`
3. Napisać skrypt który przyjmuje ścieżkę do katalogu jako parametr oraz wykonuje na wszystkich plikach w nim się znajdujących (rekursywnie) następujące akcje (każda za pomocą pojedynczego potoku):
 * zlicza ilość linii zawierających słówko `TODO`
 * zlicza ilość pustych linii
 * zlicza ilość niepustych linii
 * zlicza ilość linii zakończonych średnikiem `;`
 * zlicza ilość linii zawierających tylko klamrę `{` lub `}`
 * zlicza ilość linii nie zawierających liter `a-z`, `A-Z`
 * zlicza ilość linii zawierających dokładnie dwa otwierające nawiasy obok siebie. Przykładowa linijka pasująca do wzorca: `#define MULT(a, b)  (a) = (((a) * (b)) >> 16)`
 * zlicza ilość linii zawierających liczby hexadecymalne. Przykładowe liczby hexadecymalne: `0xff9900` lub `0xFF9900`
 * zlicza ilość linii zakończonych trójliterowym rozszerzeniem pliku. Przykładowa linijka pasująca do wzorca: `BEES_PNG=$(dirname $0)/bees.png`
 * zlicza ilość struktur `struct`
 * zlicza ilość funkcji zwracających void oraz nie przyjmujących żadnych argumentów. Przykładowa linijka pasująca do wzorca: `void JumpToByteBoundary() {`
 * zlicza ilość funkcji zwracających void oraz przyjmujących argumenty. Przykładowa linijka pasująca do wzorca: `void RowDct(coeff_t* in, const coeff_t* table) {`
 * zlicza ilość linii zawierająch adres email. Dla uproszczenia przyjmujemy, że adres email składa się tylko z `a-z`, `.` oraz `@`
 * wyświetla statystykę pokazującą ilości słów występujących w plikach. Słowo składa się przynajmniej jednego znaku `a-z`. (`grep -hoE`, `sort`, `uniq`). Przewidywane wyjście:
```
   1045 int
    945 the
    829 t
    818 x
    792 const
    770 f
    737 c
    726 guetzli
    722 i
    699 k
    668 jpg
    632 a
    592 y
    591 size
    551 std
    543 for
    534 in
    479 block
    457 d
    451 double
(...)
```

Nieparzyści
===========

1. Pobrać paczkę do testów: `$ wget https://github.com/google/guetzli/archive/master.zip`
2. Rozpakować: `$ unzip master.zip`
3. Napisać skrypt który przyjmuje ścieżkę do katalogu jako parametr oraz wykonuje na nim następujące akcje (każda za pomocą jednego potoku):
 * zlicza ilość linii zawierających słówko `google`
 * zlicza ilość pustych linii
 * zlicza ilość niepustych linii
 * zlicza ilość linii zakończonych średnikiem `;`
 * zlicza ilość linii zawierających tylko 2 znaki
 * zlicza ilość linii nie zawierających cyfr `0-9` oraz podkreślników `_`
 * zlicza ilość linii zawierających dokładnie dwie kropki obok siebie. Przykładowa linijka pasująca do wzorca: `//   x - offset .. x + square_size - offset - 1,`
 * zlicza ilość linii zawierających liczby hexadecymalne. Przykładowe liczby hexadecymalne: `0xff9900` lub `0xFF9900`
 * zlicza ilość linii zakończonych trójliterowym rozszerzeniem pliku. Przykładowa linijka pasująca do wzorca: `BEES_PNG=$(dirname $0)/bees.png`
 * zlicza ilość klas `class`
 * zlicza ilość funkcji zwracających int oraz nie przyjmujących żadnych argumentów. Przykładowa linijka pasująca do wzorca: `int NumSymbols() const {`
 * zlicza ilość funkcji zwracających int oraz przyjmujących argumenty. Przykładowa linijka pasująca do wzorca: `int CompareQuantMatrices(const int* a, const int* b) {`
 * zlicza ilość linii zawierająch adres email. Dla uproszczenia przyjmujemy, że adres email składa się tylko z `a-z`, `.` oraz `@`
 * wyświetla statystykę pokazującą ilości liczb występujących w plikach. Liczba składa się przynajmniej jednego znaku `0-9`. (`grep -hoE`, `sort`, `uniq`). Przewidywane wyjście:
```
   3108 0
   1508 1
    912 2
    612 8
    534 3
    426 255
    318 4
    241 5
    231 6
    226 7
    144 9
    111 16
    105 64
     84 32
     64 99
     62 420
     50 90
     47 2016
     39 63
     38 14
(...)
```
