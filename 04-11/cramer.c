#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("cls");

    float a, b, c, d, e, f;
    float w, wx, wy;

    // a = 7;
    // b = 2;
    // c =1 ;
    // d =3 ;
    // e = 4 ;
    // f =2;
    // wynik y=0, x=0.5


    w = (a*e)-(b*d);
    wx = (c*e)-(b*f);
    wy = (a*f)-(c*d);


    printf("%s", "Podaj a: "); fflush(stdin); scanf("%f", &a);
    printf("%s", "Podaj b: "); fflush(stdin); scanf("%f", &b);
    printf("%s", "Podaj c: "); fflush(stdin); scanf("%f", &c);
    printf("%s", "Podaj d: "); fflush(stdin); scanf("%f", &d);
    printf("%s", "Podaj e: "); fflush(stdin); scanf("%f", &e);
    printf("%s", "Podaj f: "); fflush(stdin); scanf("%f", &f);


    if(w != 0){
        float x,y;
        x = wx/w;
        y= wy/w;
        printf("jedno rozwiazanie x=%.2f, y=%.2f", x,y);
    }
    else if(w == 0 ){
        if(wx == 0 && wy ==0){
        printf("Uklad jest nieoznaczony - nieskonczenie wiele rozwiazan");
        }
        else if(wx != 0 || wy !=0){
            printf("Uklad jest sprzeczny - nie ma rozwiazan ");
        }
    }


    printf(" \n \n");
    system("pause");
    return 0;
}
