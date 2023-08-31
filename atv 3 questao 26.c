//atv3 q 26
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    printf("Insira o nome da sua cidade\n");
    char cidade[30];
    scanf("%s",&cidade);
    printf("Insira o nome do seu estado\n");
    char estado[30];
    scanf("%s",&estado);
    printf("Você mora em %s,%s",cidade,estado);

    return 0;
}