#include <iostream>
#include <cstdlib>

#include "UkladRownanCramer.cpp"

int main() {
    system("cls");

    Cw2Zadanie3::UkladRownanCramer uklad1(1, 2, 3, 4, 5, 6);
    uklad1.wypisz();
    uklad1.rozwiaz();

    Cw2Zadanie3::UkladRownanCramer uklad2;
    uklad2.wczytaj();
    uklad2.wypisz();
    uklad2.rozwiaz();

    system("pause");

    return 0;

}
