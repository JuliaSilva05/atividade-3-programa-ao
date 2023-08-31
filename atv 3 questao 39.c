//atv3 q 39
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    printf("Digite um numero decimal\n");
    float num;
    int int_num;
    scanf("%f",&num);
    int_num = round(num);
    printf("Numero inteiro mais proximo: %d",int_num);
    
    
    return 0;
}