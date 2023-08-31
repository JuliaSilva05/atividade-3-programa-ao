//atv3 q 35
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    printf("Digite o valor da base e da altura de um triangulo\n");
    int base,altura,perimetro;
    scanf("%d",&base);
    scanf("%d",&altura);
    perimetro = 2 * base + 2 * altura;
    printf("Perimetro = %d\n",perimetro);
    
    return 0;
}