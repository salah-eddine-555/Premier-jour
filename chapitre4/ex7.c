#include<stdio.h>

int main(){
    int montant;

    printf("Veuillez saisir le montant en dollars : ");
    scanf("%d", &montant);

    int bielle20 = montant / 20;
    int reste = montant % 20;

    int bielle10 = reste / 10;
    reste = reste % 10;

    int bielle5 = reste / 5;
    reste = reste % 5;

    int bielle1 = reste;

    printf("Billets de 20$ : %d\n", bielle20);
    printf("Billets de 10$ : %d\n", bielle10);
    printf("Billets de 5$ : %d\n", bielle5);
    printf("Billets de 1$ : %d\n", bielle1);

    return 0;

}