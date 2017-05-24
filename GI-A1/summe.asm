; Summe von einzugebenden Zahlen ermitteln und ausgeben
; =====================================================

; ---------------- Zahl einlesen ---------------------------------------------
01 INP 01    ; Zahl einlesen und an Adresse 1 (Datenspeicher) speichern

; ---------------- Wenn Zahl = 0, dann naechste Anweisungen ueberspringen ---
02 LDA 01    ; Lade Zahl von Adresse 1 (Datenspeicher) in den Akkumulator
03 JEZ 07    ; Falls Akku == 0, springe an Programmadr. 7 (OUT 02)

; ---------------- Zahl auf bisherige Summe aufaddieren ----------------------
04 ADD 02    ; Addiere auf Akku Inhalt von Adresse 2 (Datenspeicher)
05 STA 02    ; Speichere Akku an Adresse 2 (Datenspeicher)

; ---------------- Sprung auf Programmanfang (neue Zahl einlesen ) -----------
06 JMP 01    ; Springe zurück an Programmadr. 1 (INP 01)

; ---------------- Ermittelte Summe ausgeben und Programmende ----------------
07 OUT 02    ; Gib Inhalt von Adresse 2 (Datenspeicher) aus
08 HLT 99    ; Programmende