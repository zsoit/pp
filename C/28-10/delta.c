#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("cls");

    float a, b, c, d;
    float x1, x2;

    printf("%s", "Podaj a: ");
    fflush(stdin);
    scanf("%f", &a);

    printf("%s", "Podaj b: ");
    fflush(stdin);
    scanf("%f", &b);


    printf("%s", "Podaj c: ");
    fflush(stdin);
    scanf("%f", &c);


    if(a==0 || b==0){
        printf("%s", "Rownanie sprzeczne \n");
        return 1;
    }

    d = pow(b, 2)-(4*a*c);

    if(d>0){
        x1 = (-b - sqrt(d))/(2*a);
        x2= (-b + sqrt(d))/(2*a);
        printf("> Miejsca zerowe: \n x1=%.2f \n x2=%.2f", x1, x2);

    }
    else if(d==0){
        x1 = (-b - sqrt(d))/(2*a);
        printf("> Miejsce zerowe: \n x1=%.2f", x1);
    }

    else{
        printf("%s", "> Brak miejsc zerowych");
    }


    printf(" \n");
    system("pause");
    return 0;







}