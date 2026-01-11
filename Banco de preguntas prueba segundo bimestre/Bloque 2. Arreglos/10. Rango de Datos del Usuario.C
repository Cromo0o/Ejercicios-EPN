/*

Pide al usuario que llene un arreglo de 10 números. 
Luego, pasa ese arreglo a una función que encuentre el valor máximo y el mínimo, 
y retorne la diferencia entre ambos (Rango = Max - Min). 

*/
#include <stdio.h>

int getRange(int array[10]){
    
    //Asume que el primer numero es el mayor
    int maxNumber = array[0];
    
    //Caso contrario se asigna un nuevo numero como mayor
    for (int i = 1; i < 10; i++) {
        if (array[i] > maxNumber) {
            maxNumber = array[i];
        }
    }   

    int minNumber = array[0];
    
    for (int i = 1; i < 10; i++){
        if(array[i] < minNumber){
            minNumber = array[i];
        }
    }
    

    printf("\nEl numero mas grande es: %d\n", maxNumber);
    printf("El numero mas chico es: %d\n", minNumber);

    int range = maxNumber - minNumber;

    return range;

}

int main(void){

    int array[10];

    printf("Digite 10 numeros:\n>>");
    
    for (int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }

    printf("Arreglo ingresado: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }
    
    printf("El rango obtenido entre el numero mayor y menor es: %d", getRange(array));

    return 0;
}