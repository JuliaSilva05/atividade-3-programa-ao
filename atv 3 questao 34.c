//atv3 q 34
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    printf("Digite o valor do raio de uma circunferencia\n");
    int raio;
    float perimetro;
    scanf("%d",&raio);
    perimetro = 2 * 3.14 * raio;
    printf("Perimetro = %f\n",perimetro);
    
    return 0;
}