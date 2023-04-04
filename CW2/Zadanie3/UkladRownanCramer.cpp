#include <iostream>
using std::cout;
using std::cin;
using std::endl;

namespace Cw2Zadanie3
{
    class UkladRownanCramer
    {
        private:
            double a, b, c, d, e, f;
        public:
            UkladRownanCramer(double a, double b, double c, double d, double e, double f){
                cout<<"== UKLAD ROWNAN - METODA CRAMERA =="<<endl;
                this->a=a;
                this->b=b;
                this->c=c;
                this->d=d;
                this->e=e;
                this->f=f;

            }
            UkladRownanCramer(){
                cout<<"== UKLAD ROWNAN - METODA CRAMERA =="<<endl;
            }

            void wczytaj() {
                cout << "Podaj wspolczynniki: \n";

                cout<<"a: ";
                cin>>a;

                cout<<"b: ";
                cin>>b;

                cout<<"c: ";
                cin>>c;

                cout<<"d: ";
                cin>>d;

                cout<<"e: ";
                cin>>e;

                cout<<"f: ";
                cin>>f;
            }

            void wypisz() {
                cout<< a << "x + " << b << "y = " << c << endl;
                cout<< d << "x + " << e << "y = " << f << endl;
            }

            void rozwiaz() {
                double W = a*e - b*d;
                double Wx = c*e - b*f;
                double Wy = a*f - c*d;

                if (W != 0) {
                    double x = Wx / W;
                    double y = Wy / W;
                    cout << "Rozwiazanie: x = " << x << ", y = " << y << endl;
                }
                else {
                    if (Wx == 0 && Wy == 0) {
                        cout << "Uklad jest nieoznaczony" << endl;
                    }
                    else {
                        cout << "Uklad jest sprzeczny" << endl;
                    }
                }

                cout<<endl<<endl;
            }

    };
}




