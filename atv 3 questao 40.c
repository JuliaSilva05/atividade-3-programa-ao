//atv3 q 40
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    printf("Digite tres numeros inteiros\n");
    int n1,n2,n3,op;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    op = (n1+n2)*n3;
    printf("(%d+%d)*%d = %d",n1,n2,n3,op);
    
    
    return 0;
}