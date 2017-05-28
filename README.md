# BinarneDrzewoWyszukiwawcze
Zaimplementuj (samodzielnie) binarne drzewo wyszukiwawcze i następujące operacje na nim:
+ t
dodanie do drzewa napisu t
<
wypisanie minimum z drzewa
>
wypisanie maksimum z drzewa
h
wypisanie wysokości drzewa (puste drzewo ma wysokość 0)
1
wypisanie co drugiego klucza w drzewie, zaczynając od minimum
2
wypisanie co drugiego klucza w drzewie, zaczynając od następnika minimum
Kluczami w drzewie są napisy składające się z małych liter i nie dłuższe niż 16 znaków.
Wejście

Na wejściu pojawi się ciąg poleceń w przedstawionym wyżej formacie.
Wyjście

Na wyjściu należy wypisać wynik poleceń <, >, h, 1 i 2.
Przykład

Wejście
+ h
+ l
+ n
+ o
h
<
>
1
2
+ d
+ b
+ a
h
<
>
1
2
+ f
+ c
+ e
+ g
+ m
+ j
+ i
+ k
h
<
>
1
2


Wyjście
4
h
o
h n 
l o 
4
a
o
a d l o 
b h n 
4
a
o
a c e g i k m o 
b d f h j l n 
