; Minimum von zwei ganzen Zahlen ermitteln und ausgeben
; =====================================================

; ---------------- 1. Zahl einlesen ---------------------------------------------
01 INP 01    ; Zahl einlesen und an Adresse 1 (Datenspeicher) speichern

; ---------------- 2. Zahl einlesen ---------------------------------------------
02 INP 02    ; Zahl einlesen und an Adresse 2 (Datenspeicher) speichern

; ---------------- Differenz berechnen ----------------------
03 LDA 01    ; Lade Zahl von Adresse 1 (Datenspeicher) in den Akkumulator
04 SUB 02    ; Subtrahiere vom Akku Inhalt von Adresse 2 (Datenspeicher)

; ---------------- Wenn Akku >= 0, dann naechste Anweisungen ueberspringen ---
05 JGE 08    ; Falls Akku == 0, springe an Programmadr. 8

; ---------------- 1. Zahl als Ergebnis ausgeben
06 OUT 01    ; Gib Inhalt von Adresse 1 (Datenspeicher) aus

; ---------------- Sprung auf Programmende -----------
07 JMP 09    ; Springe an Programmadr. 9 

; ---------------- 2. Zahl als Ergebnis ausgeben
08 OUT 02    ; Gib Inhalt von Adresse 2 (Datenspeicher) aus

; ---------------- Programmende ----------------
09 HLT 99    ; Programmende