#include <iostream>
#include <cstdlib>
#include "Delta.cpp"

int main() {
    Cw2Zadanie2::Delta rownanie1;
    rownanie1.wczytaj();
    rownanie1.wypisz();
    rownanie1.rozwiaz();
    std::cout<<std::endl<<std::endl;

    // delta 0
    Cw2Zadanie2::Delta rowananie2(1, 2, 1);
    rowananie2.wypisz();
    rowananie2.rozwiaz();
    std::cout<<std::endl<<std::endl;

    // delta wieksza od 0
    Cw2Zadanie2::Delta rowananie3(1, 2, -3);
    rowananie3.wypisz();
    rowananie3.rozwiaz();
    std::cout<<std::endl<<std::endl;

    system("pause");
    return 0;
}
