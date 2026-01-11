/*

Escribe una función que reciba un arreglo de enteros e indique 
en qué posición se encuentra el primer número 0 encontrado. 

Importante: 
La función debe devolver el índice contando desde 1 (ej: si el cero está en la primera 
casilla, devuelve 1). Si no hay ceros, devuelve -1. 

*/
#include <stdio.h>

int searchZero(int array[20], int chainLen){

    int zeroPosition = 0;

    for (int i = 0; i < chainLen; i++){
        
        if(array[i] == 0){

            zeroPosition = i + 1;
            return zeroPosition;
        }
        
    }
    return -1;
}


int main(void){

    int array[20], opcion, i = 0;


    do{
        
        printf("Digite un numero:\n>>");
        scanf("%d", &array[i]);

        i++;

        printf("Digite cualquier numero para continuar agregando o '0' para cancelar:\n>>");
        scanf("%d", &opcion);


    } while (opcion != 0);
    
    int chainLen = i;

    if (searchZero(array, chainLen) == -1){
        printf("No se han encontrado ceros en el arreglo.");
    }
    else{
        printf("El cero se encuentra en la posicion %d", searchZero(array, chainLen));
    }

    return 0;
}