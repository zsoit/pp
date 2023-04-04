#include <iostream>
#include "Punkt.hpp"

using std::cout;
using std::endl;

void WyswietlLiczbaPunktow()
{
    int liczbaPunktow = Cw3ZadanieDodatkowe::Punkt::getLiczbaPunktow();
    cout << "> Liczba punktow: " << liczbaPunktow << endl;
}


int main() {
    system("cls");

    WyswietlLiczbaPunktow();

    Cw3ZadanieDodatkowe::Punkt p1(1, 2);
    cout << "P1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    WyswietlLiczbaPunktow();
    cout<< Cw3ZadanieDodatkowe::Punkt::getLiczbaPunktow();


    Cw3ZadanieDodatkowe::Punkt p2(p1);
    cout << "P2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;
    WyswietlLiczbaPunktow();


    p2.setX(3);
    cout << "P1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "P2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

    system("pause");
    return 0;
}
