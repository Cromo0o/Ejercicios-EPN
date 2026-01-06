/*

Crea una función que reciba primero el tamaño del 
arreglo y luego el arreglo mismo. La función debe intercambiar el valor de la 
primera posición con el de la última posición.

*/
#include <stdio.h>

void swapEnds(int arrayLen, int array[20]){

    //Imprimimos el arreglo original
    printf("Arreglo original: ");
    for (int i = 0; i < arrayLen; i++){
        printf("%d ", array[i]);
    }

    int firstPos;

    //Intercambiamos extremos
    firstPos = array[0];
    array[0] = array[arrayLen - 1];
    array[arrayLen - 1] = firstPos;

    //Imprimimos el nuevo arreglo
    printf("\nArreglo con extremos intercambiados: ");
    for (int i = 0; i < arrayLen; i++){
        printf("%d ", array[i]);
    }

}

int main(void){

    int i = 0;
    int opcion;
    int array[20];
    int arrayLen = 0;

    do{

        printf("Digite un numero:\n>>");
        scanf("%d", &array[i]);

        i++;

        printf("Digite cualquier numero para ingresar otro numero, sino digite 0 para cancelar:\n>>");
        scanf("%d", &opcion);


    } while(opcion != 0);

    arrayLen = i;    
   
    swapEnds(arrayLen, array);


    return 0;

}