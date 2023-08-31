//atv3 q 37
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Digite sua idade\n");
    int idade, meses,dias;
    scanf("%d",&idade);
    meses = idade * 12;
    dias = idade * 365;
    printf("Você tem %d meses e %d dias",meses,dias);
    
    return 0;
}