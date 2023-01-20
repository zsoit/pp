#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

void ObliczKolo(float promien, float *pole, float *obwod)
{
  *pole = PI*pow(promien,2);
  *obwod =(2*PI)*promien;
}


struct wynik
{
    float pole;
    float obowod;
};

struct wynik ObliczKolo2(float promien)
{

    struct wynik w;
    w.obowod = PI*pow(promien,2);
    w.pole = (2*PI)*promien;
    return w;

};

void ObliczKolo3(float promien, struct wynik *w)
{
    w->obowod = PI*pow(promien,2);
    w->pole = (2*PI)*promien;

}

int main()
{
   system("cls");

   float r = 1;
   float p;
   float obw;

   ObliczKolo(r, &p, &obw);
   printf("Pole = %5.1f, obwod = %5.2f ",p,obw);

   system("pause");
   return 0;
}
