//atv3 q 33
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    printf("Digite a base e a altura de um triangulo\n");
    int base,altura,area;
    scanf("%d",&base);
    scanf("%d",&altura);
    area = (base * altura) / 2;
    printf("Area = %d\n",area);
    
    return 0;
}