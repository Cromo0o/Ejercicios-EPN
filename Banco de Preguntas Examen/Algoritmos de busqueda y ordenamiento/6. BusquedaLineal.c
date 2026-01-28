/*
Codificar en C una función que implemente búsqueda lineal para un arreglo de tamaño 
y elementos ingresados por el teclado. El programa debe permitir ingresar el valor 
a buscar por teclado y luego retornar el índice del elemento encontrado, 
contado desde 1; o devolver -1 en caso de no ser encontrado. 
Al final imprimir: "Elemento x encontrado en la posición i" o "Elemento x no encontrado en el arreglo".
*/

#include <stdio.h>
#include <windows.h>

int busquedaLineal(int arr[], int x, int n){
    for (int i = 0; i < n; i++){
        if(arr[i] == x){
            return i + 1;
        }
    }
    return -1;    
}

int main(){
    SetConsoleOutputCP(65001);
    int arr[100];
    int n, x, resultado;

    printf("Digite el tamaño del arreglo:\n>>");
    scanf("%d", &n);
    
    printf("Digite los %d elementos:\n>>", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Que numero desea buscar?\n>>");
    scanf("%d", &x);

    resultado = busquedaLineal(arr, x, n);

    if(resultado == -1){
        printf("Elemento %d no encontrado en el arreglo\n", x);
    } else{
        printf("Elemento %d encontrado en la posición %d\n", x, resultado);
    }
    

    return 0;
}