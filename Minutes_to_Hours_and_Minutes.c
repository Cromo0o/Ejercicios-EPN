//minutes to hours and minutes
#include <stdio.h>
#include <math.h>

int main(void){

    float minutosTotal, horas, minutosRestantes;

    printf("Digite la cantidad de minutos: ");
    scanf("%f",&minutosTotal);

    horas = trunc(minutosTotal / 60);
    minutosRestantes = minutosTotal - (horas * 60);

    printf("En %.0f minutos hay %.0f horas y %.0f minutos.\n", minutosTotal, horas, minutosRestantes);

    return 0;

}