#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Tablica.hpp"

using std::cout;
using std::endl;

int main() {
    system("cls");
    srand(time(NULL)); // inicjalizacja generatora liczb losowych

    // Testowanie konstruktora bezargumentowego
    Cw3Zadanie1::Tablica tab1;
    tab1.wypisz(); // powinno wypisać 10 zer

    // Testowanie konstruktora z argumentem
    Cw3Zadanie1::Tablica tab2(5);
    tab2.wypisz(); // powinno wypisać 5 zer

    // Testowanie konstruktora kopiującego
    Cw3Zadanie1::Tablica tab3 = tab2;
    tab3.wypisz(); // powinno wypisać 5 zer

    // Testowanie funkcji get i set
    tab1.set(0, 5);
    tab1.set(1, 10);
    cout << "Element 0: " << tab1.get(0) << endl; // powinno wypisać 5
    cout << "Element 1: " << tab1.get(1) << endl; // powinno wypisać 10

    // Testowanie funkcji losuj i wypisz
    tab1.losuj();
    tab1.wypisz(); // powinno wypisać losowe liczby

    // Testowanie funkcji avg i geom
    cout << "Srednia arytmetyczna: " << tab1.avg() << endl;
    cout << "Srednia geometryczna: " << tab1.geom() << endl;

    // Testowanie funkcji minimum i maksimum
    cout << "Wartosc minimalna: " << tab1.minimum() << endl;
    cout << "Wartosc maksymalna: " << tab1.maksimum() << endl;

    // Testowanie funkcji sortuj
    tab1.sortuj();
    tab1.wypisz(); // powinno wypisać posortowane liczby

    // Testowanie funkcji mediana
    cout << "Mediana: " << tab1.mediana() << endl;

    system("pause");
    return 0;
}


