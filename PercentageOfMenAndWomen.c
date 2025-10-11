#include <stdio.h>
//Determine the percentage of men and women in a given group
int main(void){

    float hmbrs, mjrs, total, percentH, percentM;

    printf("* Programa para saber el porcentaje de hombres y mujeres en un grupo *\n");

    printf("Digite la cantidad de mujeres: ");
    scanf("%f",&mjrs);

    printf("Digite la cantidad de hombres: ");
    scanf("%f",&hmbrs);

    total = hmbrs + mjrs;
    percentH = ( ( hmbrs / total ) * 100 );
    percentM = ( ( mjrs / total ) * 100 );


    printf("En un grupo de %.0f personas, hay %.2f%% de hombres\n", total, percentH);
    printf("En un grupo de %.0f personas, hay %.2f%% de mujeres\n", total, percentM);

    return 0;

}