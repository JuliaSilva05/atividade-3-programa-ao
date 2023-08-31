//atv 3 q 7
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Digite um numero decimal:\n");
    float x,quad;
    scanf("%f",&x);

    quad = x * x;
    printf("O quadrado de %f é igual a ",x);
    printf("%f",quad);
    
    return 0;
}