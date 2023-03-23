/*
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

#define MAX_OSOB 100
#define MAX_IMIE 20
#define MAX_NAZWISKO 20
#define MAX_DATA 11

struct osoba {
    char imie[MAX_IMIE];
    char nazwisko[MAX_NAZWISKO];
    char data_urodzenia[MAX_DATA];
};

struct osoba tablica_osob[MAX_OSOB];
int liczba_osob = 0;

void menu();
struct osoba wczytaj_osobe();
void wprowadzanie_danych();
void wyswietlanie_danych();


int main() {
    system("cls");
    menu();
    system("pause");
    return 0;
}

void menu() {
    int wybor;
    do {
        printf("Menu:\n");
        printf("1-Wprowadzanie danych\n");
        printf("2-Wyswietlanie danych\n");
        printf("3-Wyjscie z programu\n");
        printf("=> Wybierz opcje: ");
        scanf("%d", &wybor);
        switch (wybor) {
            case 1:
                wprowadzanie_danych();
                break;
            case 2:
                wyswietlanie_danych();
                break;
            case 3:
                printf("=> Koniec programu.\n");
                break;
            default:
                printf("=> Nieprawidlowy wybor. Sprobuj ponownie.\n \n \n");
        }
    } while (wybor != 3);
}

struct osoba wczytaj_osobe()
{
    struct osoba nowa_osoba;

    printf("Podaj imie: ");
    fflush(stdin);
    scanf("%s", nowa_osoba.imie);

    printf("Podaj nazwisko: ");
    fflush(stdin);
    scanf("%s", nowa_osoba.nazwisko);

    printf("Podaj date urodzenia (w formacie DD-MM-RRRR): ");
    fflush(stdin);
    scanf("%s", nowa_osoba.data_urodzenia);

    printf("==> wprowadzono dane! \n \n \n");

    return nowa_osoba;
}

void wprowadzanie_danych() {
    if (liczba_osob >= MAX_OSOB) {
        printf("=> Blad: osiagnieto maksymalna liczbe osob w tablicy.\n");
        return;
    }

    tablica_osob[liczba_osob] =  wczytaj_osobe();
    liczba_osob++;
}

void wyswietlanie_danych() {
    if (liczba_osob == 0) {
        printf("=> Brak danych.\n");
        return;
    }
    printf("imie      nazwisko      data urodzenia\n");
    printf("---------------------------------------\n");
    int i;
    for (i = 0; i < liczba_osob; i++) {
        printf("%-10s%-14s%s\n", tablica_osob[i].imie, tablica_osob[i].nazwisko, tablica_osob[i].data_urodzenia);
    }
    printf("\n \n \n");

}
