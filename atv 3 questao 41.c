//atv3 q 41
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    printf("Digite uma temperatura em graus Celsius\n");
    int celsius,fahrenheit;
    scanf("%d",&celsius);
    fahrenheit = (celsius*9/5)+32;
    printf("Fahrenheit = %d",fahrenheit);
    
    
    return 0;
}