#include <stdio.h>

int binarySearch(int arr[],int n, int x){
    int min = 0;
    int max = n;
    int mid = (min + max)/2;
    int encontrado = 0;
    int posicion = 0;
    int i = 0;

    while ((min <= max) && (i < n) && (encontrado == 0)){
        if(arr[mid] == x){
            encontrado = 1;
            posicion = mid;
        } else if(arr[mid] > x){    //Buscar por la parte izquierda
            max = mid;
            mid = (min + max)/2;
        } else{     //Buscar por la parte derecha
            min = mid;
            mid = (min + max)/2;
        }
        i++;
    }
    
    if (posicion != 0){
        return posicion;
    }
    return -1;
}


int main(void){

    int arr[100], n, x, resultado;

    printf("Digite el tamanio de su arreglo:\n>>");
    scanf("%d", &n);

    printf("Digite los %d elementos del arreglo:\n>>", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Que numero desea buscar dentro del arreglo?\n>>");
    scanf("%d", &x);

    resultado = binarySearch(arr, n, x);

    if (resultado == -1){
        printf("Elemento %d no encontrado en el arreglo", x);
    } else{
        printf("Elemento %d encontrado en la posicion %d", x, resultado + 1);
    }

    return 0;
}