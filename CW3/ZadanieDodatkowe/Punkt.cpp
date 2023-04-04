#include "Punkt.hpp"

namespace Cw3ZadanieDodatkowe
{
    int Punkt::liczba_punktow = 0;

    Punkt::Punkt() : x(0), y(0)
    {
        ++liczba_punktow;
    }

    Punkt::Punkt(double x, double y)
    {
        this->x=x;
        this->y=y;
        ++liczba_punktow;
    }

    Punkt::Punkt(const Punkt &other)
    {
        this->x = other.x;
        this->y = other.y;
        ++liczba_punktow;
    }

    Punkt::~Punkt()
    {
        --liczba_punktow;
    }

    int Punkt::getLiczbaPunktow()
    {
        return liczba_punktow;
    }

    // GETTER/SETTER
    void Punkt::setX(double x)
    {
        this->x = x;
    }

    void Punkt::setY(double y)
    {
        this->y = y;
    }

    double Punkt::getX() const
    {
        return x;
    }

    double Punkt::getY() const
    {
        return y;
    }
}
