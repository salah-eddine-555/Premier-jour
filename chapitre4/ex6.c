#include<stdio.h>
#include<math.h>

int main(){
    float x, pol;

    printf("Saisie la valeur de x : ");
    scanf("%f", &x);

    pol = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;

    printf("la value de cette polynome est pour x = %f est %f", x, pol);


}