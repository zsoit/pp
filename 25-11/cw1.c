#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6


int main()
{
    int D1[N];

    for(int i=0;i<N;i++ ){
        D1[i]=i+1;

    }

    srand(time(NULL));
    int liczba_wylosowana = rand()%N;
    printf("Liczba wylosowana: %d \n", D1[liczba_wylosowana]);


    printf("Elementy tablicy: ");
     for(int i=0;i<N;i++ ){
       printf("%d, ", D1[i]);

    }


    int suma = 0;
    int iloczyn = 1;
     for(int i=0;i<N;i++ ){
       suma += D1[i];
       iloczyn *= D1[i];


    }

    printf("\n > Suma tablicy: ");
    printf("%d \n", suma);


    printf("\n > Iloczyn tablicy: ");
    printf("%d \n", iloczyn);

    printf("\n > Srednia arytmetyczna: ");
    float SA = (float)suma/N;
    printf("%.1f \n", SA);


    printf(" \n \n");
    system("pause");
    return 0;

}