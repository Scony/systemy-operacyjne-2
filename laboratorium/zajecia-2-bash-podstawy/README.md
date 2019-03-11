# Materialy

[Instrukcje do zajec](http://www.zsk.ict.pwr.wroc.pl/zsk/repository/dydaktyka/so/instrukcje/bash.pdf)
[Kalkulator modulo](https://www.miniwebtool.com/modulo-calculator)

# Zadanie dla wszystkich 1

Napisac skrypt ktory pobierze pliki z listy znajdujacej sie w pliku `lista.txt`. W kazdym kroku (przed pobraniem), skrypt powinien wyswietlac jedynie URL. Zawartosc pliku:

```
http://weka.pwr.edu.pl/fcp/YGBUKOQtTKlQhbx08SlkTUANQX2o8DAoHNiwFE1wZDyEPG1gnBVcoFW8SBDRKTxMKRy0SODwBBAEIMQheCFVAORFCHzY/37/public/wizytowki/krzysztof_abramski.jpg
http://weka.pwr.edu.pl/fcp/8GBUKOQtTKlQhbx08SlkTUANQX2o8DAoHNiwFE1xGTnhPFRYqCl5tDXdAGHpEQVgQaxMDOCAEDgMdLA5fRE0cLA9EHzY/37/public/wizytowki/krzysztof_adamczyk.jpg
http://weka.pwr.edu.pl/fcp/YGBUKOQtTKlQhbx08SlkTUANQX2o8DAoHNiwFE1wZDyEPG1gnBVcoFW8SBDRKTxMKRy0SODwBBAEIMQheCFVAORFCHzY/37/public/wizytowki/pawel_bardowski.jpg
http://weka.pwr.edu.pl/fcp/YGBUKOQtTKlQhbx08SlkTUANQX2o8DAoHNiwFE1wZDyEPG1gnBVcoFW8SBDRKTxMKRy0SODwBBAEIMQheCFVAORFCHzY/37/public/wizytowki/mariusz_bartczak_2.jpg
http://weka.pwr.edu.pl/fcp/YGBUKOQtTKlQhbx08SlkTUANQX2o8DAoHNiwFE1wZDyEPG1gnBVcoFW8SBDRKTxMKRy0SODwBBAEIMQheCFVAORFCHzY/37/public/wizytowki/janusz_biernat_2.jpg
http://weka.pwr.edu.pl/fcp/YGBUKOQtTKlQhbx08SlkTUANQX2o8DAoHNiwFE1wZDyEPG1gnBVcoFW8SBDRKTxMKRy0SODwBBAEIMQheCFVAORFCHzY/37/public/wizytowki/rborowiec.jpg
```

# Zadanie dla wszystkich 2

Napisac skrypt ktory na podstawie zadanego zakresu (2 parametry) wygeneruje liste plikow. Przykladowo dla parametrow `10` i `15` wygenerowane zostanie 5 plikow o nazwach: `plik10`, `plik11`, `plik12`, `plik13`, `plik14` oraz `plik15`.

# Zadanie 1

Wyswietlenie nazw oraz policzenie wszystkich plików w zadanym katalogu (parametr wywołania skryptu), do których ustawione jest prawo dostępu do wykonania (`execute`).

# Zadanie 2

Kasowanie wszystkich plików pustych (o zerowej wielkości) w zadanym katalogu (parametr wywołania skryptu). Skrypt powinien wyswietlic listę skasowanych plików.

# Zadanie 3

Przesuwanie wszystkich plików z ustawionym prawem odczytu z jednego katalogu do drugiego. Pozostałe pliki w katalogu nie powinny być ruszane. Nazwy katalogów, źródłowego i docelowego, zadawane jako parametry skryptu.

# Zadanie 4

Łączenie w jeden plików z listy umieszczonej w pliku o zadanej nazwie (parametr wywołania skryptu). Kolejność, w jakiej pliki zostaną połączone - ściśle według listy. Treść każdego pliku powinna być poprzedzona nagłówkiem z jego nazwą.

# Zadanie 5

Numerowanie wszystkich plików w zadanym katalogu (parametr wywołania skryptu), do których **nie** mamy ustawionego prawa wykonywania (`execute`), przez dodanie dodatkowego członu rozszerzenia o postaci `.<numer kolejny>`.
