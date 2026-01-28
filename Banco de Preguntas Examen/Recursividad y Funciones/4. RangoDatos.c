//Codificar en C una función que pida al usuario que llene un arreglo de 10 numeros.
//Luego, pase ese arreglo a una función y encuentre el valor minimo, y retorne la diferencia entre ambos
// rango = max - min
#include <stdio.h>

int getRange(int arr[]){
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < 10; i++){
        if (arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max - min;   
}

int main() {
    
    int arr[10];

    printf("Digite 10 numeros:\n>>");
    for (int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    printf("El rango es: %d", getRange(arr));
    
    return 0;
}