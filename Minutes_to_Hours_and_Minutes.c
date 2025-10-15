//minutes to hours and minutes
#include <stdio.h>
#include <math.h>

int main(void){

    float minutosTotal, horas, minutosRestantes, resto, segundos;

    printf("Digite la cantidad de minutos: ");
    scanf("%f",&minutosTotal);

    if (minutosTotal <= 0){

        printf("El valor ingresado no es valido");

    }
    else{

        horas = trunc(minutosTotal / 60);
        minutosRestantes = minutosTotal - (horas * 60);
        
        resto = minutosTotal - trunc(minutosTotal);     //Eliminamos la parte decimal si es que se ingresa una
        segundos = resto * 60;  

        printf("En %.0f minutos hay %.0f horas, %.0f minutos y %.0f segundos.\n", minutosTotal, horas, minutosRestantes, segundos);

    }
    
    return 0;
}