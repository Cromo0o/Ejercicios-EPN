#include <stdio.h>


void getSwap(int tamanio, int array[]){

    int primerNumero = array[0];
    int ultimoNumero = array[tamanio - 1];
    
    printf("Arreglo original: ");
    for (int i = 0; i < tamanio; i++){
        printf("%d ", array[i]);
    }
    
    array[tamanio - 1] = primerNumero;
    array[0] = ultimoNumero;

    printf("\nEl nuevo arreglo con extremos cambiados: ");
    for (int i = 0; i < tamanio; i++){
        printf("%d ", array[i]);
    }
    
}

int main(void){

    int array[100], cantidad;

    printf("Cuantos numeros desea ingresar:\n>>");
    scanf("%d", &cantidad);
    
    printf("Digite los %d numero(s):\n>>", cantidad);
    for (int i = 0; i < cantidad; i++){
        scanf("%d", &array[i]);
    }

    getSwap(cantidad, array);

    return 0;
}