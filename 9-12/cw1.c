#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define N 10

int main()
{
    char napis[N];
    int i;
    int ileLiter =0;
    int ilemaliter = 0;
    int ileCyfr=0;
    int ileMalych=0;
    int ileDuzych=0;

    srand(time(NULL));

    for(i=0; i<N;i++){

        napis[i] = rand()%(128-48)+48; //74+1

        if(isalpha(napis[i])) ileLiter++;
        if(islower(napis[i])) ileMalych++;
        if(isupper(napis[i])) ileDuzych++;
        if(isdigit(napis[i])) ileCyfr++;
    ;

    }

    printf("Wylosowany napis: %s \n \n", napis);
    printf("Liczba liter %d \n", ileLiter);
    printf("Liczba malych liter: %d \n", ileMalych);
    printf("Liczba duzych liter: %d \n", ileDuzych);
    printf("Liczba cyfr: %d \n", ileCyfr);





    printf(" \n \n");
    system("pause");
    return 0;

}




/*
char napis[80];
fgets(napis, siezeof(napis), stdin);

Zadanie 2,3


*/