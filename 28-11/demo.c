#include <stdio.h>
#include <stdlib.h>
int main(){
    char imie[15];
    char inicjal;
    int wiek;
    float wzrost;

    printf("%s", "Podaj imie: ");
    fflush(stdin);
    fgets(imie,15,stdin);

    printf("%s", "Podaj inicjal nazwiska: ");
    fflush(stdin);
    scanf("%c", &inicjal);

    printf("%s", "Podaj wiek: ");
    fflush(stdin);
    scanf("%d", &wiek);


    printf("%s", "Podaj wzrost w metrach: ");
    fflush(stdin);
    scanf("%f", &wzrost);

    wzrost = wzrost*100;

    printf("Nazywasz sie %s %c , masz %d lat i masz %.0f cm \n",imie,inicjal,wiek,wzrost);

    system("pause");
    return 0;




}
