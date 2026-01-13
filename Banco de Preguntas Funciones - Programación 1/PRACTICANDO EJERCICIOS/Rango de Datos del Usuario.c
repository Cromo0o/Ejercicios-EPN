#include <stdio.h>

int getRange(int arreglo[]){

    int menor = arreglo[0];
    int mayor = arreglo[0];

    for (int i = 1; i < 10; i++){
        
        if (arreglo[i] > mayor){
            mayor = arreglo[i];
        }

        if (arreglo[i] < menor){
            menor = arreglo[i];
        }
    }
    
    return mayor - menor;
}

int main(){

    int array[10];

    printf("Digite 10 numeros:\n>>");
    for (int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

    printf("El rango entre el numero maximo y el minimo es: %d", getRange(array));

    return 0;
}