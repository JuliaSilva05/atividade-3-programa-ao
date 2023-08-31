//atv3 q 9
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Digite seu primeiro nome:\n");
    char nm[30];
    char sbnm[30];
    scanf("%s",&nm);
    printf("Digite o seu sobrenome:\n");
    scanf("%s",&sbnm);
    strcat(nm," ");
    strcat(nm,sbnm);
    printf("Nome completo: ");
    printf("%s",nm);
    
    
    return 0;
}