#include <iostream>
using namespace std;

class uklad
{
    private:
        double a, b, c, d, e, f;

    public:
        uklad(double aa, double bb, double cc, double dd, double ee, double ff) : a(aa), b(bb), c(cc), d(dd), e(ee), f(ff){}

        ~uklad(){}

        void wczytaj()
        {
            cout << "> Podaj wspolczynniki a, b, c, d, e, f: ";
            cin >> a >> b >> c >> d >> e >> f;
        }

        void wypisz() const
        {
            cout << a << "x + " << b << "y = " << c << endl;
            cout << d << "x + " << e << "y = " << f << endl;
        }

        void rozwiaz() const
        {
            double W = a * e - b * d;
            double Wx = c * e - b * f;
            double Wy = a * f - c * d;
            if (W == 0)
            {
                if (Wx == 0 && Wy == 0)
                    cout << "Uklad jest nieoznaczony." << endl;
                else
                    cout << "Uklad jest sprzeczny." << endl;
            }
            else
            {
                double x = Wx / W;
                double y = Wy / W;
                cout << "Rozwiazanie ukladu: x = " << x << ", y = " << y << endl;
            }
        }
};

int main() {
    uklad u(1, 2, 3, 4, 5, 6);
    u.wypisz();     // wypisze: 1x + 2y = 3     4x + 5y = 6
    u.rozwiaz();    // wypisze: Rozwiazanie ukladu: x = -4, y = 3
    u.wczytaj();
    u.wypisz();
    u.rozwiaz();
    return 0;
}

