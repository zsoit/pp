#include <ctype.h>    /* funkcja tolower                  */
#include <stdio.h>    /* funkcje getchar, fflush, printf  */
#include <stdlib.h>   /* funkcja system                   */

#define LICZBA_PYTAN 4

/* typ strukturalny opisujacy pytanie testowe */
typedef struct
{
   char tekst_pytania[50];   /* tekst pytania */
   char odpA[25], odpB[25], odpC[25], odpD[25];	 /* teksty odpowiedzi */
   char odpOK;               /* poprawna odpowiedz */
} pytanie;

/* tablica struktur */
pytanie test[LICZBA_PYTAN] =  /* inicjalizacja tablicy */
   {
      "Slowo kluczowe sizeof to:",
         "instrukcja", "funkcja", "operator", "nie ma takiego slowa", 'c',
      "Petla while to petla",
         "z licznikiem", "z testem na wejsciu", "z testem na wyjsciu",
         "nie ma takiej petli", 'b',
      "Operator % moze miec argumenty",
         "staloprzecinkowe", "zmiennoprzecinkowe", "dowolne", "znakowe", 'a',
      "Operator ^ to operator",
         "potegowania", "bitowy AND", "bitowy OR", "bitowy EX-OR", 'd'
   };

int main()
{
   int i;           /* licznik petli for             */
   int wynik = 0;   /* liczba poprawnych odpowiedzi  */
   char znak;       /* biezaca odpowiedz uzytkownika */

   system("cls");
   printf("Program przeprowadza test jednokrotnego wyboru z jezyka C\n");
   for (i = 0; i < LICZBA_PYTAN; i++)   /* petla wyswietlajaca pytania */
   {
      printf("\nPytanie %d:\n", i+1);
      printf("%s\n  a) %s\n  b) %s\n  c) %s\n  d) %s\nTwoja odpowiedz: ",
         test[i].tekst_pytania, test[i].odpA, test[i].odpB, test[i].odpC, test[i].odpD);
      fflush(stdin);               /* wyczyszczenie bufora wejsciowego */
      znak = tolower(getchar());   /* odczyt odpowiedzi uzytkownika     */
      if (znak == test[i].odpOK)   /* sprawdzenie odpowiedzi            */
         wynik++;                  /* jesli dobrze, zwiekszenie wyniku  */
   }
   printf("\nKONIEC TESTU\n");
   printf("Na %d pytan udzieliles %d poprawnych odpowiedzi\n", LICZBA_PYTAN, wynik);
   printf("Twoja skutecznosc wynosi %.0f%%\n\n", (float)wynik/LICZBA_PYTAN*100);
   system("pause");
   return 0;
}
