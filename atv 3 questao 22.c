//atv3 q 22
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    printf("Digite 2 números decimais\n");
    float x,y,resto;
    scanf("%f",&x);
    scanf("%f",&y);
    resto = fmod(x,y);
    printf("Resto: %f\n",resto);
    
    return 0;
}