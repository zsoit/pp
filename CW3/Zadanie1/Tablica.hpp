#ifndef TABLICA_HPP
#define TABLICA_HPP
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

namespace Cw3Zadanie1
{
    class Tablica
    {
        private:
            int n;
            int *wsk;

        public:
            Tablica();
            Tablica(int rozmiar);
            Tablica(const Tablica &tablica);
            ~Tablica();
            int get(int i) const;
            void set(int i, int val);
            void losuj();
            void wypisz() const;
            double avg() const;
            double geom() const;
            int minimum() const;
            int maksimum() const;
            void sortuj();
            double mediana() const;
        };

}

#endif // TABLICA_HPP

