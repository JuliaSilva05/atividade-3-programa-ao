//atv3 q 20
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Insira a base e a altura do retângulo\n");
    int base,altura,area;
    scanf("%d",&base);
    scanf("%d",&altura);
    area = base * altura;
    printf("Área = %d",area);
    
    return 0;
}