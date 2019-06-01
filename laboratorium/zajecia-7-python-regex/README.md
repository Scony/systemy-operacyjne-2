# Materiały

[Instrukcje do zajec (re/python2)](https://docs.python.org/2.7/library/re.html)

[Instrukcje do zajec (re/python3)](https://docs.python.org/3/library/re.html)

**Wszystkie zadania należy wykonać bez użycia podprocesów** (`subprocess`, `psutils` etc.)

# Zadania dla osób o parzystym numerze albumu

Napisać następujące skrypty w języku python (wersja 2 lub 3 wedle uzniania):

1. Wyświetlający pliki oraz katalogi (z katalogu podanego jako pierwszy argument skryptu) których nazwy rozpoczynają się na słowo `file_`

2. Wyświetlający pliki oraz katalogi (z katalogu podanego jako pierwszy argument skryptu) których nazwy zaczynają się na **małą literę**

3. Wyświetlający pliki oraz katalogi (z katalogu podanego jako pierwszy argument skryptu) których nazwy kończą się na **przynajmniej 3 cyfry**

4. Wyświetlający pliki oraz katalogi (z katalogu podanego jako pierwszy argument skryptu) których nazwy **nie zawierają podkreślników**

5. Wyświetlający wszystkie liczby zawarte w pliku podanym jako pierwszy argument skryptu. Liczbą jest dowolny ciąg cyfr. Przykładowo plik o zawartości `asdf 123 qwe 098 zxc 123` zawiera 3 liczby.

# Zadania dla osób o nieparzystym numerze albumu

Napisać następujące skrypty w języku python (wersja 2 lub 3 wedle uzniania):

1. Wyświetlający pliki oraz katalogi (z katalogu podanego jako pierwszy argument skryptu) których nazwy rozpoczynają się na słowo `file_`

2. Wyświetlający pliki oraz katalogi (z katalogu podanego jako pierwszy argument skryptu) których nazwy zaczynają się na **cyfrę**

3. Wyświetlający pliki oraz katalogi (z katalogu podanego jako pierwszy argument skryptu) których nazwy kończą się na **przynajmniej 3 litery**

4. Wyświetlający pliki oraz katalogi (z katalogu podanego jako pierwszy argument skryptu) których nazwy **nie zawierają wykrzykników**

5. Wyświetlający wszystkie liczby zawarte w pliku podanym jako pierwszy argument skryptu. Liczbą jest dowolny ciąg cyfr. Przykładowo plik o zawartości `asdf 123 qwe 098 zxc 123` zawiera 3 liczby

# Zadanie dodatkowe

1. Pobrać paczkę do testów: `wget https://github.com/google/guetzli/archive/master.zip`

2. Rozpakować

3. Napisać skrypt który przyjmuje ścieżkę do katalogu jako parametr oraz bazując na wszystkich plikach w nim się znajdujących (rekursywnie), wyświetla statystykę pokazującą ilości słów występujących w plikach. Słowo składa się przynajmniej jednego znaku `a-z`. Orientacyjne wyjście:
```
('const', 1132)
('int', 1033)
('x', 1030)
('the', 993)
('t', 912)
('f', 831)
('y', 734)
('guetzli', 727)
('k', 723)
('c', 719)
('i', 675)
('jpg', 672)
('d', 664)
('a', 653)
('size', 635)
('for', 599)
('in', 585)
('std', 511)
('block', 485)
('if', 441)
(...)
```
