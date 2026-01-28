//Siempre que el elemento que está a la izquierda es mayor que el de la derecha, hago swap
#include <stdio.h>

void insertionSort(int arr[], int n){
    printf("Arreglo original: ");
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    int pos, aux;

    for (int i = 1; i < n; i++){
        pos = i;
        aux = arr[i];
        
        while ((pos > 0) && arr[pos - 1] > aux){
            arr[pos] = arr[pos - 1];
            pos = pos - 1;
            for (int i = 0; i < n; i++){
                printf("%d", arr[i]);
            }
        }
        arr[pos] = aux;
        printf("\n");
    }
    printf("\nArreglo ordenado: ");
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
}


int main(){

    int arr[100], n;

    printf("Digite el tamanio de su arreglo:\n>>");
    scanf("%d", &n);

    printf("Digite los %d elementos del arreglo:\n>>", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    return 0;
}