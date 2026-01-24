//Ir comparando los elementos del arreglo de 2 en 2
//Si no están colocados correctamente, intercambiarlos
//Así hasta que tengamos el arreglo ordenado.

//Se utilizan 2 iteradores
// i -> contará las vueltas que daremos al arreglo (n - 1)
// j -> representará las posiciones o indices del arreglo


// NumActual > NumSiguiente; cambio
// Sino, se deja igual
#include <stdio.h>

void bubbleSort(int arr[],int n){
    int aux;
    printf("Arreglo original: ");
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }    
    
    for (int i = 0; i < (n - 1); i++){
        for (int j = 0; j < (n - 1); j++){
            if(arr[j] > arr[j+1]){
                aux = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = aux;
            }
        }
    }
    
    printf("\nArreglo ordenado: ");
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
}

int main(){
    int arr[50];
    int n;

    printf("Cuantos elementos desea ingresar:\n>>");
    scanf("%d", &n);

    printf("Digite los %d elementos:\n>>", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    bubbleSort(arr, n);

    return 0;
}