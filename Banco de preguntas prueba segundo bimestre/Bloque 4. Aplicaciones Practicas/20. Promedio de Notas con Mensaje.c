/*

Función que reciba un arreglo con 4 notas. 
Retorna 'A' si el promedio es ≥7 o 'R' si es menor. 

*/
#include <stdio.h>

char getGradesAverage(float calificaciones[]){

    float promedio = 0;

    for (int i = 0; i < 4; i++){
        promedio += calificaciones[i];
    }

    promedio /= 4;

    if (promedio >= 7){
        return 'A';
    }
    else{
        return 'R';
    }

    return promedio;
}

int main(void){

    float grades[4];

    printf("## Calculadora de promedio ##\n");

    printf("Digite las 4 notas a promediar:\n>>");
    for (int i = 0; i < 4; i++){
        scanf("%f", &grades[i]);
    }

    printf("'%c'", getGradesAverage(grades));

    return 0;
}

