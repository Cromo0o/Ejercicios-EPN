#include <stdio.h>

void bubbleSort(int arr[], int n){
    int aux;
    
    printf("Arreglo original: ");
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    printf("\n\n");

    for (int i = 0; i < (n - 1); i++){
        for (int j = 0; j < (n-1); j++){
            if (arr[j] > arr[j + 1]){
                aux = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = aux;
            }
        }
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

    bubbleSort(arr, n);


    return 0;
}