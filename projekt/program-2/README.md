Program 2
=========

Termin oraz oddawanie
---------------------

Projekt należy oddać (wysłać mailowo / wrzucić na githuba) oraz obronić na zajęciach / konsultacjach do dnia 26.04.2018 z tym dniem włącznie. Osoby / pary z TP mogą bronić swój program na zajęciach TN i vice versa. Każdy dzień zwłoki to 0.5 oceny w dół, w związku z czym **6 dni zwłoki jest równoznaczne z niezaliczeniem przedmiotu**. To samo tyczy się plagiatów - skutkować będą niezaliczeniem przedmiotu.

Idea
----

Celem realizacji drugiego programu jest nabycie podstawowych umiejętności pisania aplikacji wielowątkowych oraz poznanie podstawowego mechanizmu synchronizacji wątków.

Wymagania funkcjonalne
----------------------

Program ma przy użyciu biblioteki [ncurses](https://en.wikipedia.org/wiki/Ncurses) podzielić okno terminala na 4 części.

W pierwszej z nich, jeden z wątków ma losować oraz przemieszczać w dół swojej ramki klocki (niczym w kultowej grze `tetris`). Gdy w owej pierwszej ramce klocek spadnie na sam dół, powinien zniknąć i jednocześnie trafić do współdzielonej kolekcji (np listy).

Trzy pozostałe wątki odpowiedzialne za trzy pozostałe części ekranu powinny z użyciem zmiennej warunkowej (bez aktywnego czekania) czekać na pojawienie się nowego klocka w kolekcji. W momencie gdy dowolny z wątków dostanie informację o nowym klocku w kolekcji, powinien go z niej wyciągnąć (zapamiętać i usunąć) a następnie narysować ów klocek w losowym miejscu w zakresie swojej ramki.

W efekcie, klocki spadające z góry na dół w pierwszej części ekranu będą po dojściu do ramki pojawiać się w losowych miejscach pozostałych części ekranu (mogą tam pozostać nieruchome). Z czasem, 3 ostatnie ekrany będą się wypełniać klockami aż do zupełnego zamalowania.

Wymagania formalne
------------------

 - użycie `C++ 11` lub `C` oraz [POSIX Threads](https://en.wikipedia.org/wiki/POSIX_Threads)
 - tworzenie i uruchamianie watkow (`std::thread`)
 - poprawne kończenie wątków i zamykanie aplikacji (zamknięcie wszystkich wątków przed zamknięciem wątku glownego)
 - użycie biblioteki [ncurses](https://en.wikipedia.org/wiki/Ncurses)
 - poprawna synchronizacja dostępu wątków do bilbioteki `ncurses` przy użyciu podstawowego mechanizmu synchronizacji w postaci `std::mutex` (plus opcjonalnie wrappery typu `std::lock_guard` itp.)
 - synchronizacja za pomocą `std::condition_variable` bez aktywnego czekania

Uwagi
-----

Projekt można realizować w parach (również między-grupowych [dotyczy tylko moich grup])

Pytania
-------

Proszę kierować na maila
