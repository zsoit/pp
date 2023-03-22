#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;
    int n;

    printf("%s", "Podaj a: ");
    fflush(stdin);
    scanf("%f", &a);

    printf("%s", "Podaj n: ");
    fflush(stdin);
    scanf("%d", &n);

    float wynik;

    if(n < 0)
    {
        n = n*-1;
        a = 1.0/a;

    }
    else if(n == 0){
        wynik = 0;
    }
    else{
        wynik = 1.0;
    }


    for(int i=0; i<n; i++){
        wynik = wynik*a;
    }


    printf("> Wynik potęgowania to %.2f", wynik);


    printf(" \n \n");
    system("pause");
    return 0;

}