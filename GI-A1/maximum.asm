; Finde die grössere Zahl in 2 Zahlen 

01 INP 01	; Speichere 1.Input in Adresse 1 

02 INP 02	; Speichere 2.Input in Adresse 2   

03 LDA 01    	; Lade 1.Input in Akku 
04 SUB 02    	; Substrahiere 2.Input von 1.Input 

05 JLE 08	; Gib 2.Input zurück wenn Ergebnis in Akku <= 0     

06 OUT 01	; Gib 1.Input zurück    

07 JMP 09	; Springe zum Ende des Programms

08 OUT 02	; Gebe 2.Input zurück     
	
09 HLT 99	; Stoppe Programm    