//Codificar una funcion que reciba un arreglo de enteros y su tamaño 
//retorne cuántos números pares hay en el
#include <stdio.h>
#include <windows.h>

int sacarPares(int arr[], int leng){
    int pares = 0;
    for (int i = 0; i < leng; i++){
        if(arr[i] % 2 == 0){
            pares++;
        }
    }
    return pares;
}

int main(){
    SetConsoleOutputCP(65001);
    int arr[100];
    int leng;

    printf("Digite el tamaño de su arreglo:\n>>");
    scanf("%d", &leng);

    printf("Digite los %d numeros:\n>>", leng);
    for (int i = 0; i < leng; i++){
        scanf("%d", &arr[i]);
    }

    printf("Su arreglo tiene %d numeros pares", sacarPares(arr, leng));

    return 0;
}