## Zadania dla osób o parzystym numerze albumu

Napisać następujące skrypty w języku python (wersja 2 lub 3 wedle uzniania):

1. Wyświetlający `PID` aktualnego procesu.

2. Wyświetlający zawartość zmiennej środowiskowiej `PWD`.

3. Wyświetlający zawartość (pliki i katalogi) bieżącego katalogu.

4. Wyświetlający zawartość (pliki i katalogi) katalogu podanego jako pierwszy argument skryptu. Dodatkowo, obok nazw plików/katalgów powinien pojawić się ich rozmiar w bajtach.

5. Wyświetlający **rekursywnie** (`os.walk`) zawartość (tylko pliki) katalogu podanego jako pierwszy argument skryptu.

6. Zmieniający prawa dostępu do pliku podanego jako pierwszy argument skryptu na `rwxrwxrwx`.

7. Tworzący katalog a w nim `100` plików o różnych nazwach (np `plik1`, `plik2` itp.).

8. Zmieniający nazwy wszystkich plików (z `NAZWA_PLIKU` na `NAZWA_PLIKU.copy`) w katalogu podanym jako pierwszy argument skryptu.

Napisać następujące skrypty powłoki BASH:

1. Ustawiąjący zmienną środowiskową `XYZ` z poziomu BASHa oraz wyświetlający jej zawartość za pomocą skryptu *inline* w języku python (`python -c [KOMENDA]`).

## Zadania dla osób o nieparzystym numerze albumu

Napisać następujące skrypty w języku python (wersja 2 lub 3 wedle uzniania):

1. Wyświetlający bieżący katalog roboczy (`CWD`).

2. Wyświetlający zawartość zmiennej środowiskowiej `PATH`.

3. Wyświetlający zawartość (pliki i katalogi) katalogu `/`.

4. Wyświetlający zawartość (pliki i katalogi) katalogu podanego jako pierwszy argument skryptu. Dodatkowo, obok nazw plików/katalgów powinna pojawić się ilość dowiązań twardych.

5. Wyświetlający **rekursywnie** (`os.walk`)  zawartość (tylko katalogi) katalogu podanego jako pierwszy argument skryptu.

6. Zmieniający prawa dostępu do pliku podanego jako pierwszy argument skryptu na `rwxrwxrwx`.

7. Tworzący katalog a w nim `100` katalogów o różnych nazwach (np `katalog1`, `katalog2` itp.).

8. Zmieniający nazwy wszystkich katalogów (z `NAZWA_KATALOGU` na `NAZWA_KATALOGU-copy`) w katalogu podanym jako pierwszy argument skryptu.

Napisać następujące skrypty powłoki BASH:

1. Ustawiąjący zmienną środowiskową `XYZ` za pomocą skryptu *inline* w języku python (`python -c [KOMENDA]`) oraz wyświetlający jej zawartość z poziomu BASHa.

## Zadanie dodatkowe

Napisać skrypt w pythonie który naśladuje zachowanie polecenia `ls -l` - powinien on przyjmować ścieżkę do katalogu jako pierwszy argument skryptu i wyświetlać jego zawartość w taki sam sposób jak polecenie `ls -l`. Przykładowo, polecenie `python skrypt.py /` powinno zwrócić to samo co polecenie `ls -l /`.

## Materiały

[https://docs.python.org/2/library/os.html](https://docs.python.org/2/library/os.html)

[http://www.pythonforbeginners.com/argv/more-fun-with-sys-argv](http://www.pythonforbeginners.com/argv/more-fun-with-sys-argv)
