#include<stdio.h>

int main(){
    float montant;
    float tax;

    printf("Enterz le montant en dollars : ");
    scanf("%f", &montant);

    tax = montant + montant * 0.05;
    printf("montant avec tax est : %.2f: ", tax);




}