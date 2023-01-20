#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   system("cls");
   
   time_t c1;       /* czas w sekundach od 1-01-1970 godz. 0:00 */
   struct tm *wsk1; /* czas jako struktura tm */
   
   c1 = time(NULL); /* odczyt z zegara systemowego */
   /* time(&c1); */ /* odczyt z zegara systemowego */
   printf("Czas to: %d\n", c1);
   printf("Czas to: %s\n", ctime(&c1)); /* konwersja time_t na C-string */
   
   wsk1 = localtime(&c1); /* zamiana time_t na struct tm */
   printf("%2d:%2d:%2d\n", wsk1->tm_hour, wsk1->tm_min, wsk1->tm_sec);

   system("pause"); printf("\n");

   /*--------------------*/
   time_t c2;           /* czas w sekundach od 1-01-1970 godz. 0:00 */
   struct tm *wsk2;     /* czas jako struktura tm */
   c2 = time(NULL);     /* odczyt z zegara systemowego */
   printf("Czas to: %d\n", c2);
   printf("Czas to: %s\n", ctime(&c2)); /* konwersja time_t na C-string */
   wsk2 = localtime(&c2); /* zamiana time_t na struct tm */
   printf("%2d:%2d:%2d\n", wsk2->tm_hour, wsk2->tm_min, wsk2->tm_sec);
   /*----------------------*/
   
   system("pause");
   return 0;
}
