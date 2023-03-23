#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define N 10

int main()
{
    char napis[N];
    printf("Podaj zdanie: ");
    fgets(napis, sizeof(napis), stdin);
    int i;
    int ileLiter =0;
    int ileCyfr=0;
    int ileMalych=0;
    int ileDuzych=0;
    int liczbaSlow=0;


    for(i=0; i<N;i++){

        if(isalpha(napis[i])) ileLiter++;
        if(islower(napis[i])) ileMalych++;
        if(isupper(napis[i])) ileDuzych++;
        if(isdigit(napis[i])) ileCyfr++;
        if(isspace(napis[i])) liczbaSlow++;
    ;

    }

    printf("%s \n \n", napis);
    printf("Liczba liter %d \n", ileLiter);
    printf("Liczba malych liter: %d \n", ileMalych);
    printf("Liczba duzych liter: %d \n", ileDuzych);
    printf("Liczba cyfr: %d \n", ileCyfr);
    printf("Liczba slow: %d \n", liczbaSlow);

    printf(" \n \n");
    system("pause");
    return 0;

}

