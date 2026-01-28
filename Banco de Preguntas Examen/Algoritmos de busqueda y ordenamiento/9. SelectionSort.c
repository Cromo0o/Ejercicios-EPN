#include <stdio.h>

void selectionSort(int arr[], int n){
    int aux, min;
    
    printf("Arreglo original: ");
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    for (int i = 0; i < (n-1); i++){
        min = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        aux = arr[min];
        arr[min] = arr[i];
        arr[i] = aux;

        printf("\n");
        for (int i = 0; i < n; i++){
            printf("%d", arr[i]);
        }
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

    selectionSort(arr, n);

    return 0;
}