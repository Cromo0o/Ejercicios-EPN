#include <stdio.h>

int main(void){

    int  hmbrs, mjrs, total;
    float percentH, percentM;

    printf("* Programa para saber el porcentaje de hombres y mujeres en un grupo *\n");

    printf("Digite la cantidad de mujeres: ");
    scanf("%d",&mjrs);

    printf("Digite la cantidad de hombres: ");
    scanf("%d",&hmbrs);

    total = hmbrs + mjrs;
    percentH = ( hmbrs / total ) * 100;
    percentM = ( mjrs / total ) * 100;

    printf("En un grupo de %d personas, hay %.2f%% de hombres");


}