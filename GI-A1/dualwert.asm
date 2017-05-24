; Finde den Dezimalwert von Dualwert 

01 LDK 002	; Lade Konstante 2 in Akku  
02 STA 2 	; Speichere Konstante 2 in Adresse 2 
03 LDK 001 	; Lade Konstante 1 in Akku 
04 STA 3 	; Speichere Produkt in Adresse 3 

05 INP 1 	; Speichere Input in Adresse 1 
06 LDA 1 	; Lade Input in Akku 

07 JLZ 17	; Springe aus der Input-Schleife wenn Input < 0 

08 MUL 3	; Multipliziere Input mit Produkt 
09 STA 4	; Speichere Zwischensergebnis in Adresse 4 

10 LDA 5 	; Lade Ergebnis in Akku 
11 ADD 4 	; Addiere Zwischensergebnis in Ergebnis  
12 STA 5	; Spechere Ergebnis in Adresse 5

13 LDA 3	; Lade Produkt in Akku 
14 MUL 2	; Multipliziere Produkt mit 2 
15 STA 3 	; Speichere Produkt in Adresse 3 

16 JMP 05	; Springe zum Anfang der Input-Schleife 

17 OUT 5 	; Gebe Ergebnis zurück 

18 HLT 99 	; Stoppe Programm 




