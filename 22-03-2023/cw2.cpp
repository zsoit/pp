#include <iostream>
#include <cmath>

using namespace std;

class Rownanie
{
    private:
        float a, b, c;

    public:
        Rownanie(float a, float b, float c);
        Rownanie();
        ~Rownanie();

        void wczytaj();
        void wypisz();
        void rozwiaz();

};



Rownanie::Rownanie(float a, float b, float c) {
    cout<<"ROWNANIE KWADRATOWE:"<<endl;
    this->a = a;
    this->b = b;
    this->c = c;
}

Rownanie::Rownanie(){
    cout<<"ROWNANIE KWADRATOWE:"<<endl;
}

Rownanie::~Rownanie()
{

}

void Rownanie::wczytaj() {
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
}

void Rownanie::wypisz() {
    cout<<"a="<<a<<", b="<<b<<", c="<<c<<endl;
    cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
}

void Rownanie::rozwiaz() {
    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        cout << ">> x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (delta == 0) {
        float x = -b / (2 * a);
        cout << ">> x = " << x << endl;
    }
    else {
        cout << ">> Brak rozwiazan w dziedzinie liczb rzeczywistych" << endl;
    }
}

int main() {
    Rownanie r1;
    r1.wczytaj();
    r1.wypisz();
    r1.rozwiaz();
    cout<<endl<<endl;

    // delta 0
    Rownanie r2(1, 2, 1);
    r2.wypisz();
    r2.rozwiaz();
    cout<<endl<<endl;

    // delta wieksza od 0
    Rownanie r3(1, 2, -3);
    r3.wypisz();
    r3.rozwiaz();
    cout<<endl<<endl;

    return 0;
}
