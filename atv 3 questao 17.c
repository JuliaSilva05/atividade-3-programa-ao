//atv3 q 17
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Digite a altura e o peso:\n");
    float altura,peso,IMC;
    scanf("%f",&altura);
    scanf("%f",&peso);
    IMC = peso / (altura*altura);
    printf("IMC = %f",IMC);
    
    return 0;
}