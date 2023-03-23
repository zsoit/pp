#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int liczba_wylosowana, liczba_uzytkownika;
int liczba_prob;

int main()
{
    system("cls");
    printf("%s", "Zgadnij liczbe z przedzialu <0,100> \n");

    srand(time(NULL));
    liczba_wylosowana = rand()%11;
    do {
        printf("Podaj liczbe: ");
        scanf("%d", &liczba_uzytkownika);
        if (liczba_uzytkownika<liczba_wylosowana)
            printf("> za mala \n");
        else
            if(liczba_uzytkownika>liczba_wylosowana)
                printf("> za duza \n");
    }
    while(liczba_uzytkownika!=liczba_wylosowana);
    printf("> Zgadles\n");

    printf(" \n \n");
    system("pause");
    return 0;

}