Program 1
=========

Termin oraz oddawanie
---------------------

Projekt należy oddać (wysłać mailowo / wrzucić na githuba) oraz obronić na zajęciach / konsultacjach do dnia 05.04.2018 z tym dniem włącznie. Osoby / pary z TP mogą bronić swój program na zajęciach TN i vice versa. Każdy dzień zwłoki to 0.5 oceny w dół, w związku z czym **6 dni zwłoki jest równoznaczne z niezaliczeniem przedmiotu**. To samo tyczy się plagiatów - skutkować będą niezaliczeniem przedmiotu.

Idea
----

Celem realizacji programu pierwszego jest nabycie podstawowych umiejętności pisania aplikacji wielowątkowych oraz poznanie podstawowego mechanizmu synchronizacji wątków.

Wymagania funkcjonalne
----------------------

Program ma przy użyciu biblioteki [ncurses](https://en.wikipedia.org/wiki/Ncurses) podzielić okno terminala na 4 części. W każdej z nich, oddzielny wątek powinien poruszać skończonej długości wężem (jak w kultowej grze `Snake`) błądzącym losowo w granicach danej części. Dodatkowe funkcjonalności pozostają kwestią otwartą i każdy może je dowolnie wprowadzać.

Wymagania formalne
------------------

 - użycie `C++ 11` lub `C` oraz [POSIX Threads](https://en.wikipedia.org/wiki/POSIX_Threads)
 - tworzenie i uruchamianie watkow (`std::thread`)
 - poprawne kończenie wątków i zamykanie aplikacji (zamknięcie wszystkich wątków przed zamknięciem wątku glownego)
 - użycie biblioteki [ncurses](https://en.wikipedia.org/wiki/Ncurses)
 - poprawna synchronizacja dostępu wątków do bilbioteki `ncurses` przy użyciu podstawowego mechanizmu synchronizacji w postaci `std::mutex` (plus opcjonalnie wrappery typu `std::lock_guard` itp.)

Uwagi
-----

Projekt można realizować w parach (również między-grupowych [dotyczy tylko moich grup])

Pytania
-------

Proszę kierować na maila
