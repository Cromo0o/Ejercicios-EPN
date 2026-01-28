/*
Codificar en C una función recursiva que calcule el mínimo
común múltiplo de dos números naturales a y b ingresados por el teclado.

Sugerencia: Usar la fórmula que relaciona MCM y MCD, e implementar recursividad en la función MCD

mcm(a, b) = a * b / MCD(a, b)

Divisor -> Es el numero que cabe exactamente dentro de un numero
*/
#include <stdio.h>

//Algoritmo de Euclides
int encontrarMCD(int a, int b){
    if(a == 0){
        return b;
    }
    return encontrarMCD(b % a, a);
}

int main(){
    int a, b;

    printf("Digite dos numeros:\n>>");
    scanf("%d%d", &a, &b);
    
    //verificamos que sean numeros naturales
    if(a > 0 && b > 0){
        int mcm, mcd;
        mcd = encontrarMCD(a, b);
        mcm = (a * b)/mcd;
        printf("EL minimo comun multiplo entre esos numeros es: %d", mcm);
    } else{ 
        printf("Los numeros ingresados deben ser naturales");
    }

    return 0;
}
