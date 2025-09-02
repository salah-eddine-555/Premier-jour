#include<stdio.h>
#include<math.h>

int main(){
    float x, pol;

    printf("Saisie la valeur de x : ");
    scanf("%f", &x);

    pol = 3*powf(x,5) + 2*powf(x,4) - 5*powf(x,3) - powf(x,2) + 7*x - 6;

    printf("la value de cette polynome est pour x = %f est %f", x, pol);


}