/*

Función que reciba un arreglo de enteros y su 
tamaño, y retorne cuántos números pares hay en él. 

*/
#include <stdio.h>

int getPairNumbers(int digitos[20], int chainLen){

    int pairNumbers = 0;

    for (int i = 0; i < chainLen; i++){
        
        if ( (digitos[i] % 2) == 0 ){       //Es Par, se suma un uno al contador de pares
            pairNumbers++;
        }
    }
    return pairNumbers;
}

int main(void){

    int digitos[20];
    int opcion = 0;
    int i = 0;

    do{

        printf("Digite un numero:\n>>");
        scanf("%d", &digitos[i]);

        i++;
        
        printf("Desea agregar otro numero?\n");
        printf("Digite cualquier numero si quiere agregar un nuevo numero.\n");
        printf("Digite 0 para dejar de agregar numeros\n");
        scanf("%d", &opcion);

    } while(opcion != 0);
    
    //Bucle que inicia desde 0 hasta la ultima posicion ingresada que se guardó en i
    printf("Cadena de numeros ingresada: ");
    for (int j = 0; j < i; j++) {
        
        printf("%d ", digitos[j]);
    
    }

    int chainLen = i;

    printf("La cantidad de numeros pares de tu cadena son: %d", getPairNumbers(digitos, chainLen));

    return 0;
}