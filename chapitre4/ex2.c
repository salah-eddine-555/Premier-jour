#include<stdio.h>
#include <math.h>

int main() {
    float Pi=3.14 ,r;
    float v;

    printf("saisie la valeur de rayon : " );
    scanf("%f", &r);

    v = 4.0f/3.0f*Pi*pow(r,3);
    printf("le volume de ce sphere est %.2f :", v);

    return 0;

}