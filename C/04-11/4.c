#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.14;

void menu(){
    printf("Bryly geometryczne: \n");
    printf("[ 1 ] kula \n");
    printf("[ 2 ] walec \n");
    printf("[ 3 ] stożek \n");
    printf("[ 4 ] wyjscie z programu \n");
}

void kula(){
    float v, r;

    printf("> Podaj promień kuli: ");
    scanf("%f", &r);

    v = (4.0/3.0)*PI*(pow(r,3));
    printf("Kula o promieniu %.2f ma objętość: %.2f",r,v);
}

void walec(){
    float v, r, h;

    printf("> Podaj promień walca: ");
    scanf("%f", &r);

    printf("> Podaj wysokość walca: ");
    scanf("%f", &h);

    v = PI*pow(r,2)*h;
    printf("Walec o promieniu %.2f i wysokosci %.2f ma objętość: %.2f",r,h,v);
}

void stozek(){
    float r, h, v;

    printf("> Podaj promien stozka: ");
    scanf("%f", &r);

    printf("> Podaj wysokosc stozka: ");
    scanf("%f", &h);

    v = ((1.0/3.0)*PI)*(pow(r,2))*h;
    printf("Stozek o promieniu %.2f i wysokosci %.2f ma objętość: %.2f",r,h,v);
}

int main(){
    system("cls");

    char wybor;

    menu();

    printf("Wybierz bryle: ");
    fflush(stdin);
    scanf("%c", &wybor);

    printf("\n \n");

    switch (wybor)
    {
        case '1': kula(); break;
        case '2': walec(); break;
        case '3': stozek(); break;
        case '4': return -1; break;
        default: return -1; break;
    }


    printf(" \n \n");
    system("pause");
    return 0;

}