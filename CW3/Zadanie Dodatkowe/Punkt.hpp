#ifndef PUNKT_HPP
#define PUNKT_HPP

#include <iostream>
namespace Cw3ZadanieDodatkowe
{
    class Punkt
    {
        private:
            double x;
            double y;
            static int liczba_punktow;
        public:
            Punkt();
            Punkt(double x, double y);
            Punkt(const Punkt& other);
            ~Punkt();
            static int getLiczbaPunktow();
            void setX(double x);
            void setY(double y);
            double getX() const;
            double getY() const;
    };
}

#endif // PUNKT_HPP



