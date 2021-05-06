# Periferic_USB

În cadrul acestui proiect, am realizat un periferic de tip tastatura, ce va completa automat o semnătură rapidă la apasarea unui buton, ce poate fi folosită, de exemplu, pentru un email.

Drept componente pentru acest periferic am folosit o plăcută de dezvoltare Arduino UNO, un port USB tip B, un buton cu o rezistenta de 10k ohmi, un led cu o rezistență de 220 ohmi și partea de interfațare electrică cu conexiunea USB (2 diode Zener de 3.6V, 2 rezistente de 100 ohmi și o rezistență de 2K ohmi).

Liniile conexiunii USB VCC și GND se interconectează la pinii 5V și GND ai plăcii Arduino asigurând alimentarea sistemului în modul de funcționare periferic USB. 
Butonul este conectat la Pinul digital 12 prin intermediul unei rezistente de 10k ohmi, iar atunci când plăcuța Arduino va primi semnalul LOW de la el (insemnand ca acesta a fost apasat), acesta va trimite prin USB, rând pe rând, fiecare caracter ca și când ar fi fost apăsat de pe tastatura laptopului, timp in care ledul va sta aprins, dupa care se va opri.

Conexiunea USB presupune ca linia D+ să fie legată printr-o rezistență de 100 ohmi la pinul digital 2, iar linia D- să fie legată printr-o rezistență de 100 ohmi la pinul digital 4 și printr-o rezistența de 2K ohmi la pinul digital 5. Ambele linii sunt legate prin câte o Dioda Zener la masă.
