#include<stdio.h>

int main() {
    float m,taux,paiement, R1, R2, R3;


    printf("Entrez le montant du pret : \n");
    scanf("%f", &m);
    printf("Entrez le taux d'interet  : \n");
    scanf("%f", &taux);
    printf("Entrez le paiement mensule : \n");
    scanf("%f", &paiement);

    R1 = m - paiement + (m * taux/12 /100);
    R2 = R1 - paiement + (R1 * taux/12 /100);
    R3 = R2 - paiement + (R2 * taux/12 /100);



    printf("Solde restant apres le premier paiment est : %.2f\n", R1);
    printf("Solde restant apres le deuxeme paiment est : %.2f\n", R2);
    printf("Solde restant apres le troiseme paiment est : %.2f\n", R3);

    return 0;



}