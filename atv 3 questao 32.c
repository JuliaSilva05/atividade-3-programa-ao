//atv3 q 32
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    printf("Digite 2 números inteiros\n");
    int x,y;
    int soma,sub,mult,divi;
    scanf("%d",&x);
    scanf("%d",&y);
    soma = x + y;
    sub = x - y;
    mult = x * y;
    divi = x / y;
    printf("Soma: %d\n",soma);
    printf("Subtração: %d\n",sub);
    printf("Multiplicação: %d\n",mult);
    printf("Divisão: %d\n",divi);
    
    return 0;
}