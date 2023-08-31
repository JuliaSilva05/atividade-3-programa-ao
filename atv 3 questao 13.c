//atv3 q 13
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char string[80];
    printf("Insira uma string\n");
    scanf("%s",&string);
    int tamanho;
    tamanho = strlen(string);
    if (tamanho>0){
        printf("%d",tamanho);
    }
    
    return 0;
}