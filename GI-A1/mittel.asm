; Finde den Mittelwert von n ganzen Zahlen 

01 INP 1	; Speichere Input in Adresse 1  
02 LDA 1	; Lade Input in Akku 
  
03 JEZ 10	; Springe aus der Input-Schleife wenn Input <=0

04 ADD 2	; Addiere Zwischensumme in Summe 		   
05 STA 2  	; Speichere Summe in Adresse 2 

06 LDK 1	; Lade Konstante 1 in Akku
07 ADD 4	; Addiere Z�hler in Akku  
08 STA 4	; Speichere Akku in Z�hler 

09 JMP 01	; Springe zum Anfang der Input-Schleife   

10 LDA 2	; Lade Summe in Akku 
11 DIV 4	; Dividiere Summe mit Z�hler 
12 STA 2	; Speichere Ergebnis in Adresse 2 
	
13 OUT 2 	; Gebe Ergebnis zur�ck   

14 HLT 99	; Stoppe Programm    