#include <iostream>
#include "Uklad.cpp"

int main() {
    UkladRownan u(1, 2, 3, 4, 5, 6);
    u.wypisz();     // wypisze: 1x + 2y = 3     4x + 5y = 6
    u.rozwiaz();    // wypisze: Rozwiazanie Ukladu: x = -4, y = 3
    u.wczytaj();
    u.wypisz();
    u.rozwiaz();
    return 0;
}
