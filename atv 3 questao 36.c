//atv3 q 36
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    printf("Digite tres numeros decimais\n");
    float x,y,z,media;
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    media = (x+y+z)/3;
    printf("Media = %f\n",media);
    
    return 0;
}