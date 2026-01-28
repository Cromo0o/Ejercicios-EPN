//Escribir una función recursiva para elevar un numero a una potencia base

//Caso base -> n^0 = 1
//Todo numero elevado a cero da 1.

//      2 * obtenerPotencia(potencia - 1)

#include <stdio.h>

int obtenerPotencia(int base, int potencia){
    int retorno;
    if(potencia == 0){
        retorno = 1;
    } else{
        retorno = base * obtenerPotencia(base, potencia - 1);
    }
    return retorno;
}

int main(){
    int base, potencia;
    printf("Digite un numero:\n>>");
    scanf("%d", &base);
    printf("Digite a que potencia desea elevar el numero:\n>>");
    scanf("%d", &potencia);

    printf("El resultado tras elevar es: %d", obtenerPotencia(base, potencia));

    return 0;
}