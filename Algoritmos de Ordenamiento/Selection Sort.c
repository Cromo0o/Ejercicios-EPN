/* 
Se trata de buscar el elemento más pequeño y colocarlo en la primera posición,
después el segundo más pequeño y colocarlo en la segunda posición,
y así sucesivamente hasta que el arreglo esté ordenado.
*/
#include <stdio.h>

void selectionSort(int n, int arr[]){
    int min, aux;
    printf("Arreglo original: ");
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }    
    
    // 3 2 5 4 1
    for (int i = 0; i < (n-1); i++){
        //Asumimos que el elemento más pequeño está en la primera posición
        min = i;
        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                //Asignamos el indice al nuevo numero menor
                min = j;
            }
        }
        aux = arr[min];
        arr[min] = arr[i];
        arr[i] = aux;
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

    selectionSort(n, arr);

    return 0;
}