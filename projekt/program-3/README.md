Program 3
=========

Terminy oraz oddawanie
---------------------

Ponieważ ten projekt charakteryzuje otwarta tematyka, istotne są 2 terminy:
 * do dnia `17.05.2018` z tym dniem włącznie, należy mailowo wysłać **tematykę oraz założenia swojego projektu** (przykładowy opis na samym dole tego dokumentu)
 * do dnia `14.06.2018` z tym dniem włącznie, należy **swój program oddać** (wysłać mailowo / wrzucić na githuba) **oraz obronić** na zajęciach / konsultacjach

Osoby / pary z TP mogą bronić swój program na zajęciach TN i vice versa. Każdy dzień zwłoki to 0.5 oceny w dół, w związku z czym **6 dni zwłoki jest równoznaczne z niezaliczeniem przedmiotu**. To samo tyczy się plagiatów - skutkować będą niezaliczeniem przedmiotu.

Idea
----

Celem realizacji trzeciego programu jest utrwalenie podstawowych umiejętności pisania aplikacji wielowątkowych oraz poznanie średnio i wysoce zaawansowanych mechanizmów synchronizacji wątków.

Wymagania funkcjonalne
----------------------

Program musi używać biblioteki [ncurses](https://en.wikipedia.org/wiki/Ncurses), ale ogólna tematyka jest dowolna. Tematy mogą się powtarzać pod warunkiem, iż implementacje będą niezależne (różne).

Jeśli chodzi o złożoność wyświetlanych za pomocą `ncurses` tworów, może ona być niska lub nawet symboliczna - skupiamy się na mechanizmach synchronizacji wątków a nie na algorytmach wyświetlania.

Wymagania formalne
------------------

### Definicje

 * **Typ wątku** - rodzaj wątku ze względu na wykonywanie określonego zadania - przykładowo, w projekcie z wężami mieliśmy zazwyczaj 2 typy wątków - główny (1 instancja) oraz wyświetlacjący (4 instancje z różnymi parameterami startowymi)
 * **Instancja wątku** - konkretne uruchomienie typu wątku - przykładowo, w projekcie z wężami mieliśmy zazwyczaj 5 instancji wątków - 1 instancja wątku głównego (main) oraz 4 instancje wątku wyświetlającego (każda z własnymi parameterami startowymi)
 * **Zasób** - dowolna kolekcja (`std::vector`, `std::list`, `std::deque` itp.) o unikatowym przeznaczeniu do której dostęp musi być synchronizowany z powodu współbieżnego dostępu przez więcej niż jeden wątek (zazwyczaj różnego typu)
 
### Wymagania na 3

 - użycie `C++ 11` lub `C` oraz [POSIX Threads](https://en.wikipedia.org/wiki/POSIX_Threads)
 - tworzenie, uruchamianie oraz poprawne kończenie wątków (`std::thread`)
 - użycie biblioteki [ncurses](https://en.wikipedia.org/wiki/Ncurses)
 - **przynajmniej 3 różne zasoby**
 - **przynajmniej 2 różne typy wątków (nie licząc głównego) przetwarzające po kilka różnych typów zasobów każdy**
 - **podstawowe mechanizmy synchronizacji: `std::mutex` oraz `std::condition_variable`**
 - poprawna synchronizacja
 - brak aktywnego czekania
 
### Wymagania na 4

 - użycie `C++ 11` lub `C` oraz [POSIX Threads](https://en.wikipedia.org/wiki/POSIX_Threads)
 - tworzenie, uruchamianie oraz poprawne kończenie wątków (`std::thread`)
 - użycie biblioteki [ncurses](https://en.wikipedia.org/wiki/Ncurses)
 - **przynajmniej 5 różnych zasobów**
 - **przynajmniej 4 różne typy wątków (nie licząc głównego) przetwarzające po kilka różnych typów zasobów każdy**
 - **podstawowe mechanizmy synchronizacji: `std::mutex` oraz `std::condition_variable`**
 - **użycie `std::atomic`**
 - poprawna synchronizacja
 - brak aktywnego czekania
 
### Wymagania na 5

 - użycie `C++ 11` lub `C` oraz [POSIX Threads](https://en.wikipedia.org/wiki/POSIX_Threads)
 - tworzenie, uruchamianie oraz poprawne kończenie wątków (`std::thread`)
 - użycie biblioteki [ncurses](https://en.wikipedia.org/wiki/Ncurses)
 - **przynajmniej 5 różnych zasobów**
 - **przynajmniej 4 różne typy wątków (nie licząc głównego) przetwarzające po kilka różnych typów zasobów każdy**
 - **przynajmniej 50 instancji wątków (łącznie)**
 - **podstawowe mechanizmy synchronizacji: `std::mutex` oraz `std::condition_variable`**
 - **użycie `std::atomic`**
 - **własna implementacja bariery (ang. barrier) lub semafora (ang. semaphore)**
 - poprawna synchronizacja
 - brak aktywnego czekania

Uwagi
-----

Projekt można realizować w parach (również między-grupowych [dotyczy tylko moich grup])

Pytania
-------

Proszę kierować na maila

Przykładowy opis projektu: Aproksymacja PI monte carlo
------------------------------------------------------

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

### Uwagi

Powyżej opisany projekt posiada:
 * 6 różnych zasobów: `LICZBY_LOSOWE`, `SUMA_W_KWADRACIE*`, `SUMA_W_KOLE*`, `LACZNIE_W_KWADRACIE`, `LACZNIE_W_KOLE` oraz `PI`
 * 5 różnych typów wątków: `GENERATOR`, `PRZETWARZACZ*`, `SUMATOR`, `APROKSYMATOR` oaz `NCURSES`
 * 6 instancji wątków (nie licząc głównego)
