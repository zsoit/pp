#include <iostream>
#include <cmath>

namespace Cw2Zadanie2
{
    class Delta
    {
        private:
            float a, b, c;

        public:
            Delta(float a, float b, float c) {
                std::cout<<"ROWNANIE KWADRATOWE:"<<std::endl;
                this->a = a;
                this->b = b;
                this->c = c;
            }

            Delta(){
                std::cout<<"=> ROWNANIE KWADRATOWE:"<<std::endl;
            }

            ~Delta()
            {

            }

            void wczytaj() {
                std::cout << "Podaj a: ";
                std::cin >> a;
                std::cout << "Podaj b: ";
                std::cin >> b;
                std::cout << "Podaj c: ";
                std::cin >> c;
            }

            void wypisz() {
                std::cout<<"a="<<a<<", b="<<b<<", c="<<c<<std::endl;
                std::cout << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
            }

            void rozwiaz() {
                float delta = b * b - 4 * a * c;

                if (delta > 0) {
                    float x1 = (-b + sqrt(delta)) / (2 * a);
                    float x2 = (-b - sqrt(delta)) / (2 * a);
                    std::cout << "==> x1 = " << x1 << ", x2 = " << x2 << std::endl;
                }
                else if (delta == 0) {
                    float x = -b / (2 * a);
                    std::cout << "==> x = " << x << std::endl;
                }
                else {
                    std::cout << "==> Brak rozwiazan w dziedzinie liczb rzeczywistych"
                    << std::endl;
                }
            }

    };

}