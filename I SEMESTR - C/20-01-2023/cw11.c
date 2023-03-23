#include <stdarg.h>   /* makra va_arg va_start va_end */
#include <stdio.h>    /* funkcja printf               */
#include <stdlib.h>   /* funkcja system               */

/* funkcja oblicza sume liczb podawanych jako argumenty wywolania */
/* wartosc 0.0 konczy liste argumentow */
/* obliczona suma zwracana jest poprzez zmienna wskaznikowa */
/* funkcja zwraca liczbe argumentow nieustalonych (ile bylo sumowanych liczb) */
int sumuj(double *suma, ...)
{
   *suma = 0;         /* wyzerowanie sumy         */
   double x;          /* biezacy argument z listy */
   int licznik = 0;   /* licznik argumentow       */
   va_list arg;       /* zmienna do obslugi listy argumentow */
   va_start(arg, suma); /* ostatni argument ustalony */

   /* petla jest powtarzana dopoki na liscie argumentow nie pojawi sie 0.0 */
   /* zero sygnalizuje koniec listy argument�w */
   while( (x = va_arg(arg, double)) != 0.0 ) /* sprawdzanie kolejnych argumentow */
   {
      *suma += x;   /* dodanie biezacej liczby do sumy       */
      licznik++;    /* zwiekszenie licznika sumowanych liczb */
   }
   va_end(arg);     /* zakonczenie obslugi listy argumentow */
   return licznik;  /* wyjscie z funkcji */
}

int main()
{
   system("cls");
   double wynik;
   sumuj(&wynik, 1.0, 2.0, 3.14, 4.0, 0.0);
   printf("%6.2lf\n", wynik);
   sumuj(&wynik, 1.0, 2.0, 3.0, 0.0);
   printf("%6.2lf\n\n", wynik);
   system("pause");
   return 0;
}