#include <iostream>
namespace Cw2Zadanie3
{
    class UkladRownanCramer
    {
        private:
            double a, b, c, d, e, f;
        public:
            UkladRownanCramer(double a, double b, double c, double d, double e, double f){
                std::cout<<"== UKLAD ROWNAN - METODA CRAMERA =="<<std::endl;
                this->a=a;
                this->b=b;
                this->c=c;
                this->d=d;
                this->e=e;
                this->f=f;

            }
            UkladRownanCramer(){
                std::cout<<"== UKLAD ROWNAN - METODA CRAMERA =="<<std::endl;
            }

            void wczytaj() {
                std::cout << "Podaj wspolczynniki: \n";

                std::cout<<"a: ";
                std::cin>>a;

                std::cout<<"b: ";
                std::cin>>b;

                std::cout<<"c: ";
                std::cin>>c;

                std::cout<<"d: ";
                std::cin>>d;

                std::cout<<"e: ";
                std::cin>>e;

                std::cout<<"f: ";
                std::cin>>f;
            }

            void wypisz() {
                std::cout<< a << "x + " << b << "y = " << c << std::endl;
                std::cout<< d << "x + " << e << "y = " << f << std::endl;
            }

            void rozwiaz() {
                double W = a*e - b*d;
                double Wx = c*e - b*f;
                double Wy = a*f - c*d;

                if (W != 0) {
                    double x = Wx / W;
                    double y = Wy / W;
                    std::cout << "Rozwiazanie: x = " << x << ", y = " << y << std::endl;
                }
                else {
                    if (Wx == 0 && Wy == 0) {
                        std::cout << "Uklad jest nieoznaczony" << std::endl;
                    }
                    else {
                        std::cout << "Uklad jest sprzeczny" << std::endl;
                    }
                }

                std::cout<<std::endl<<std::endl;
            }

    };
}




