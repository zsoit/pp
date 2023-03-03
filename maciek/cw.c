/*
Maciej Czubiński
1. W programie należy utworzyć tablicę struktur typu osoba (do przechowywania danych osobowych).
2. Program powinien wyświetlać na ekranie menu składające się z 3 pozycji:
       1-Wprowadzanie danych
       2-Wyświetlanie danych
       3-Wyjście z programu
Polecenie 1 powinno umożliwiać wprowadzenie z klawiatury do tablicy struktur pojedynczego zestawu danych: imię, nazwisko, data urodzenia.
Polecenie 2 powinno wyświetlać na ekranie zawartość tablicy struktur, w sformatowanej postaci, z nagłówkiem dla poszczególnych kolumn, na przykład:
     imię      nazwisko      data urodzenia
     -------------------------------------------------
     Jan       Kowalski      10-01-2000
     Jerzy     Nowak         05-03-2001
     Stefan   Malinowski    20-02-1999
Polecenie 3 powinno zakończyć działanie programu.
W programie należy wykorzystać podział kodu źródłowego na funkcje.

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void WyswietlMenu()
{
    printf("====PROGRAM MENU==== \n");
    printf("1-Wprowadzanie danych \n");
    printf("2-Wyświetlanie danych \n");
    printf("3-Wyjście z programu \n");

}


int NumerMenu()
{
    int numer;
    printf("Podaj numer: ");
    scanf("%d", &numer);
    return numer;
}

struct osoba
{
    char imie[15];
    char nazwisko[20];
};


struct osoba Wczytaj()
{
    struct osoba ktos;

    printf("Podaj imie: ");
    fflush(stdin);
    fgets(ktos.imie, 15, stdin);

    printf("Podaj nazwisko: ");
    fflush(stdin);
    fgets(ktos.nazwisko, 20, stdin);

    printf("==> wprowadzono dane! \n \n \n");

    return ktos;
}


void Wypisz(struct osoba ktos)
{
    printf("Imie:  %s ", ktos.imie);
    printf("Nazwisko:  %s \n", ktos.nazwisko);
    printf("\n \n \n");

}



int main()
{
    system("cls");

    int opcja;
    struct osoba student;

    do
    {
        WyswietlMenu();
        opcja = NumerMenu();

        switch (opcja)
        {
            case 1:
                student = Wczytaj();
                struct osoba *s;
                s = &student;
                break;
            case 2:
                Wypisz(*s);
                break;
            default:
                break;
        }

    }
    while(opcja!=3);


    system("pause");
    return 0;



}
