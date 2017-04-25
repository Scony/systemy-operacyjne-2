Idea
====

Celem projektu jest nabycie podstawowych umiejętności pisania aplikacji wielowątkowych oraz unikania problemów związanych z programowaniem współbieżnym. Obejmuje to:
 * tworzenie i uruchamianie watkow
 * poprawne kończenie wątków i zamykanie aplikacji (zamknięcie wszystkich wątków przed zamknięciem wątku glownego)
 * rozwiazanie problemu dostepu do zasobow oraz komunikacji miedzy watkami porzez zastosowanie metod synchronizacji o roznym stopniu zlozonosci
 * rozwiazanie problemow zwiazanych z synchronizacja takich jak deadlock, glodzenie, livelock, race condition etc.

Wymagania
=========

Projekt nalezy wykonac **samodzielnie** oraz zaliczyc przynajmniej na 3 aby zaliczyc przedmiot.

Wymagania na 3
--------------

 * przynajmniej 3 rozne zasoby
 * przynajmniej 2 rozne watki przetwarzajace po kilka roznych zasobow
 * watek wyswietlajacy stan zasobow (przynajmniej raz na sekunde) przy uzyciu biblioteki ncurses
 * niewielkie problemy lub brak problemow zwiazanych z synchronizacja
 * uzycie podstawowych metod synchronizacji oraz C++11 (`std::thread`, `std::mutex`, `std::lock_guard`, `std::sleep_for`, `std::chrono`)

Wymagania na 4
--------------

 * przynajmniej 5 roznych zasobow
 * przynajmniej 4 rozne watki przetwarzajace po kilka roznych zasobow
 * watek wyswietlajacy stan zasobow (przynajmniej raz na sekunde) przy uzyciu biblioteki ncurses
 * niewielkie problemy lub brak problemow zwiazanych z synchronizacja
 * brak aktywnego czekania
 * uzycie podstawowych oraz srednio zaawansowanych metod synchronizacji jak i C++11 (`std::thread`, `std::mutex`, `std::condition_variable`, `std::lock_guard`, `std::unique_lock`, `std::sleep_for`, `std::chrono`)

Wymagania na 5
--------------

 * przynajmniej 5 roznych zasobow
 * przynajmniej 4 rozne watki przetwarzajace po kilka roznych zasobow
 * przynajmniej 60 instancji watkow
 * watek wyswietlajacy stan zasobow (przynajmniej raz na sekunde) przy uzyciu biblioteki ncurses
 * brak problemow zwiazanych z synchronizacja
 * brak aktywnego czekania
 * uzycie podstawowych oraz srednio zaawansowanych metod synchronizacji jak i C++11 (`std::thread`, `std::mutex`, `std::recursive_mutex`, `std::condition_variable`, `std::atomic`, `std::lock_guard`, `std::unique_lock`, `std::sleep_for`, `std::chrono`)
 * uzycie oraz wlasna implementacja **semafora** oraz **bariery**

Oddawanie
=========

 * projekty przed oddaniem umieszczamy na wlasnym koncie na githubie (https://github.com)
 * w przypadku wlasnych tematow projektow, uzgodniona specyfikacje projektu nalezy wrzucic do pliku README.md
 * **projekty oddajemy wylacznie na zajeciach lub konsultacjach**
 * **ostateczny termin oddawania projektu to ostatnie zajecia w semestrze**
 * projekty mozna tez oddawac po ostatecznym terminie, ale kazdy dzien zwloki wzgledem ostatecznego terminu to 0.5 oceny w dol (warto zauwazyc, ze 6 dni zwloki uniemozliwa zaliczenie przedmiotu)

Przykladowe tematy projektow
============================

Jako temat swojego projektu mozna wybrac jeden z ponizszych lub zaproponowac wlasny. **Temat wlasny uzgodniamy mailowo z prowadzacym**. Specyfikacja projektu musi spelniac wymagania powyzej. Projekt nie moze byc trywialnym lub klasycznym problemem programowania wielowatkowego. Moze byc jednak jakas odmiana lub szczegolnym przypadkiem.

Pionki na macierzy (projekt na 3)
---------------------------------

Zasoby:
 * `KOLEJKA1` - pierwsza kolejka liczb
 * `KOLEJKA2` - druga kolejka liczb
 * `MACIERZ` - macierz rozmiaru MxN przechowujaca pionki.

Watki:
 * `PRODUCENT` - watek ktory w jednej iteracji dodaje losowa liczbe z zakresu (0..M-1) do kolejki `ZRODLO1` oraz inna losowa liczbe z zakresu (0..N-1) do kolejki `ZRODLO2`
 * `PRZETWARZACZ` - watek ktory w jednej iteracji pobiera (o ile istnieje) jedna wspolrzedna z kolejki `ZRODLO1` oraz druga wspolrzedna z kolejki `ZRODLO2`, generuje pionek i wstawia go do macierzy `MACIERZ`. Dodatkowo, watek ten w kazdej iteracji przesuwa kazdy pionek umiejscowiony na planszy o jedna pozycje w bok
 * `NCURSES` - watek ktory co sekunde uzyskuje dostep do macierzy `MACIERZ` i wyswietla na ekranie jej stan (rozmieszczenie pionkow) przy uzyciu biblioteki ncurses

Aproksymacja PI monte carlo (projekt na 4)
------------------------------------------

Opis metody tutaj: http://wazniak.mimuw.edu.pl/images/4/4a/Pr-1st-1.1-m06-lab.pdf

Zasoby:
 * `LICZBY_LOSOWE` - kolejka zawierajaca liczby losowe (bazujace na `/dev/urandom`)
 * `SUMA_W_KWADRACIE1` - czesciowa suma trafien w kwadrat ale nie w kolo
 * `SUMA_W_KOLE1` - czesciowa suma trafien w kolo
 * `SUMA_W_KWADRACIE2` - czesciowa suma trafien w kwadrat ale nie w kolo
 * `SUMA_W_KOLE2` - czesciowa suma trafien w kwadrat ale nie w kolo
 * `LACZNIE_W_KWADRACIE` - totalna suma trafien w kwadrat ale nie w kolo
 * `LACZNIE_W_KOLE` - totalna suma trafien w kwadrat ale nie w kolo
 * `PI` - aproksymacja PI

Watki:
 * `GENERATOR` - watek ktory czyta bajty z `/dev/urandom`, transformuje je w liczbe typu `long long` i wstawia do kolejki `LICZBY_LOSOWE`. Po wstawieniu *powiadamia* watki ktore potrzebuja liczb losowych, ze nowa liczba wlasnie sie pojawila
 * `PRZETWARZACZ1` - watek ktory pobiera liczby losowe z kolejki `LICZBY_LOSOWE` i na ich podstawie zwieksza liczniki `SUMA_W_KWADRACIE1` oraz `SUMA_W_KOLE1`
 * `PRZETWARZACZ2` - watek ktory pobiera liczby losowe z kolejki `LICZBY_LOSOWE` i na ich podstawie zwieksza liczniki `SUMA_W_KWADRACIE2` oraz `SUMA_W_KOLE2`
 * `SUMATOR` - watek ktory przelicza sumy `LACZNIE_W_KWADRACIE` oraz `LACZNIE_W_KOLE` na podstawie `SUMA_W_KWADRACIE1`, `SUMA_W_KWADRACIE2`, `SUMA_W_KOLE1` oraz `SUMA_W_KOLE2`
 * `APROKSYMATOR` - watek ktory uaktualnia biezaca aproksymacje liczby PI na podstawie `LACZNIE_W_KWADRACIE` oraz `LACZNIE_W_KOLE`
 * `NCURSES` - watek ktory co sekunde uzyskuje dostep do wszystkich zasbow i wyswietla w ich stany na ekranie przy uzyciu biblioteki ncurses

Warto zauwazyc, ze pary zasobow (`SUMA_W_KWADRACIE1`; `SUMA_W_KWADRACIE2`) oraz (`SUMA_W_KOLE1`; `SUMA_W_KOLE2`) reprezentuja tylko dwa rozne zasoby (bo zasoby w ramach kazdej z par reprezentuja wlasciwie to samo).

Uogolniona aproksymacja PI monte carlo (projekt na 5)
-----------------------------------------------------

Powyzszy projekt mozna uogolnic, tak aby czesciowe sumowania robila znacznie wieksza ilosc watkow. Nalezalo by tam rowniez dodac wszelkie mechanizmy synchronizacji i wymagania potrzebne na 5.

Mile widziane
=============

 * oddawanie projektow jeszcze w maju
 * wiecej niz jeden commit do gita
 * praca z branchami na gicie
 * uzycie ficzerow C++11 (dedukcja typow, petle zakresowe etc.)
 * testy napisane w `google test` + skonfigurowany CI (https://travis-ci.org)
