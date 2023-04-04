#include "Tablica.hpp"

namespace Cw3Zadanie1
{
    Tablica::Tablica()
    {
        n = 10;
        wsk = new int[n];
        for (int i = 0; i < n; i++)
            wsk[i] = 0;
    }

    Tablica::Tablica(int rozmiar)
    {
        n = rozmiar;
        wsk = new int[n];
        for (int i = 0; i < n; i++)
            wsk[i] = 0;
    }

    Tablica::Tablica(const Tablica &tablica)
    {
        n = tablica.n;
        wsk = new int[n];
        for (int i = 0; i < n; i++)
            wsk[i] = tablica.wsk[i];
    }

    Tablica::~Tablica()
    {
        delete[] wsk;
    }

    int Tablica::get(int i) const
    {
        return wsk[i];
    }

    void Tablica::set(int i, int val)
    {
        wsk[i] = val;
    }

    void Tablica::losuj()
    {
        for (int i = 0; i < n; i++)
            wsk[i] = rand() % 10 + 1;
    }

    void Tablica::wypisz() const
    {
        for (int i = 0; i < n; i++)
        cout << wsk[i] << " ";
        cout << endl;
    }

    double Tablica::avg() const
    {
        double sum = 0;
        for (int i = 0; i < n; i++)
            sum += wsk[i];
        return sum / n;
    }

    double Tablica::geom() const
    {
        double product = 1;
        for (int i = 0; i < n; i++)
            product *= wsk[i];
        return pow(product, 1.0 / n);
    }

    int Tablica::minimum() const
    {
        int min_val = wsk[0];
        for (int i = 1; i < n; i++)
        {
            if (wsk[i] < min_val)
                min_val = wsk[i];
        }
        return min_val;
    }

    int Tablica::maksimum() const
    {
        int max_val = wsk[0];
        for (int i = 1; i < n; i++)
        {
            if (wsk[i] > max_val)
                max_val = wsk[i];
        }
        return max_val;
    }

    void Tablica::sortuj()
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (wsk[j] > wsk[j + 1])
                {
                    int temp = wsk[j];
                    wsk[j] = wsk[j + 1];
                    wsk[j + 1] = temp;
                }
            }
        }
    }

    double Tablica::mediana() const
    {
        int mid = n / 2;
        if (n % 2 == 0)
        {
            return (wsk[mid - 1] + wsk[mid]) / 2.0;
        }
        else
        {
            return wsk[mid];
        }
    }
}
