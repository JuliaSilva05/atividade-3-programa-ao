//atv3 q 18
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char nome[30];
    printf("Insira o seu nome\n");
    scanf("%s",&nome);
    int letras;
    letras = strlen(nome);
    if (letras>5){
        printf("Possui mais que 5 caracteres");
    } else{
        printf("Possui menos que 5 caracteres");
    }
    
    return 0;
}