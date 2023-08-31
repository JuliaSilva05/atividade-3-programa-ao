//atv3 q 38
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Digite um valor em reais\n");
    float reais;
    scanf("%f",&reais);
    printf("Digite a cotação do dolar\n");
    float cot_dolar;
    scanf("%f",&cot_dolar);
    float dolar = reais * cot_dolar;
    printf("%f reais são %f dolares",reais,dolar);
    
    
    return 0;
}