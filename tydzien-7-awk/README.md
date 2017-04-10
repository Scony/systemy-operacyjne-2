Parzyści
========

Napisac nastepujace skrypty AWK:

1. Skrypt wyswietlajacy zawartosc pliku wraz z numerami linii np:
```
1 #!/bin/bash
2
3 pids=()
4
5 sleep 2 &
6 pids+=($!)
7
8 sleep 5 &
9 pids+=($!)
10
11 sleep 4 &
12 pids+=($!)
13
14 timeout 2 sleep 4 &
15 pids+=($!)
16
17 for pid in "${pids[@]}" ; do
18     wait $pid
19     echo $?
20 done
```
2. Skrypt wyswietlajacy zawartosc pliku, ale tylko linie 5-10
3. Skrypt zamieniajacy male litery na duze w liniach zawierajacych cyfry
4. Skrypt zamieniajacy male litery na duze w liniach w ktorych 3cie slowo sklada sie tylko z cyfr
5. Skrpyt sumujacy kolumny liczb pliku csv niezaleznie od ilosci kolumn. Wynik powinien zostac wyswietlony w formie jak ponizej:
```
11;0;1;1;0
0;1;1;1;1
1;1;17;1;1
0;0;l;0;0
---------
12;2;20;3;2
```
6. Skrypt sumujacy ilosc slow w pliku, ale tylko w liniach nieparzystych
7. Skrypt zamieniajacy male litery na duze, ale tylko w slowach ktore nie zawieraja w sobie literek `Z` lub `z`
8. Skrypt wyswietlajacy ilosc slow dluzszych niz 10 znakow
9. Skrypt liczacy sume elementow lezacych na glownej przekatnej macierzy.

Dla ponizszego pliku wynik powinien wyniesc `18`
```
6  0  1  7
0  6  0  6
1  0  6  7
```
Dla ponizszego pliku wynik powinien wyniesc `15`
```
5  0  1
0  5  0
1  0  5
```

Nieparzyści
===========

Napisac nastepujace skrypty AWK:

1. Skrypt wyswietlajacy plik wraz z numerami linii np:
```
1 #!/bin/bash
2
3 pids=()
4
5 sleep 2 &
6 pids+=($!)
7
8 sleep 5 &
9 pids+=($!)
10
11 sleep 4 &
12 pids+=($!)
13
14 timeout 2 sleep 4 &
15 pids+=($!)
16
17 for pid in "${pids[@]}" ; do
18     wait $pid
19     echo $?
20 done
```
2. Skrypt wyswietlajacy zawartosc pliku, ale bez linii 3-7
3. Skrypt zamieniajacy male litery na duze w liniach **nie** zawierajacych cyfr
4. Skrypt zamieniajacy male litery na duze w liniach w ktorych ostatnie slowo sklada sie tylko z cyfr
5. Skrpyt sumujacy kolumny liczb pliku csv niezaleznie od ilosci kolumn, ale bioracy pod uwage tylko liczby z linii parzystych. Wynik powinien zostac wyswietlony w formie jak ponizej:
```
11;0;1;1;0
0;1;1;1;1
1;1;17;1;1
0;0;l;0;0
---------
0;1;2;1;1
```
6. Skrypt sumujacy ilosc slow w pliku, ale tylko w liniach parzystych
7. Skrypt zamieniajacy male litery na duze, ale tylko w slowach ktore nie zawieraja w sobie literek `g` lub `G`
8. Skrypt wyswietlajacy ilosc slow krotszych niz 10 znakow
9. Skrypt liczacy sume elementow lezacych na glownej przekatnej macierzy.

Dla ponizszego pliku wynik powinien wyniesc `18`
```
6  0  1  7
0  6  0  6
1  0  6  7
```
Dla ponizszego pliku wynik powinien wyniesc `15`
```
5  0  1
0  5  0
1  0  5
```