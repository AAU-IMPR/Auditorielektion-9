# Auditorieopgaver i Lektion 9
## Live code 1
Live coding af `replace` starter i [src/fun_with_strings.c](src/fun_with_strings.c), og funktionen bruges i [src/replace_exe.c](src/replace_exe.c).

---
## Auditorieopgave A: Tæl antal små bogstaver
Du kan implementere funktionen `int nlower(char* input)` i [src/fun_with_strings.c](src/fun_with_strings.c), 
og afprøve funktionen med programmet i [src/count.c](src/count.c) 

> Lav en funktion der givet en streng tæller antallet af små bogstaver.
> 
> Tip: Biblioteksfunktionen `islower(char c)` fra `ctype.h` returnerer true, hvis den bliver givet en char som er et lille bogstav.
> 
> ---
> 
> (Bonus: Lav en funktion `firstlower` der returnerer en pointer til det første lille bogstav i en given streng `s`. 
>  Denne pointer vil representere en delstreng af `s`, så vi kan prøve at printe den.)

---
## Live code 2
Live coding af `copy_replace` fortsætter i [src/fun_with_strings.c](src/fun_with_strings.c).

---
## Auditorieopgave B: Alvor
Du kan for eksempel implementere din funktion i [src/fun_with_strings.c](src/fun_with_strings.c).

> Lav en funktion, der givet en streng `s`, returnerer en ny streng, som indeholder de samme tegn som `s`, men slutter med et udråbstegn.
> 
> Brug dynamisk lagerallokering.
> 
> Eksempel: Givet `"IMPR"` returneres `"IMPR!"`.
> 
> ---
> 
> (Bonus: Lav en funktion som givet en streng returnerer en ny streng som gentager hvert bogstav. 
> Hvis funktionen for eksempel får strengen `"IMPR"` som input skal den returnere strengen `"IIMMPPRR"`.)
