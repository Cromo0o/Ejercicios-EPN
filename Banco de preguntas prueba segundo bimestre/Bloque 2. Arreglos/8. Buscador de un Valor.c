/*

Función que reciba un arreglo y un número "X". Debe 
decir cuántas veces aparece "X" dentro del arreglo. 

*/
#include <stdio.h>

int findTheX(int array[20], int arrayLen, int x){

    int xCounter = 0;

    for (int i = 0; i < arrayLen; i++){
        
        if (array[i] == x){
            xCounter++;
        }
    }
    
    return xCounter;

}

int main(void){

    int array[20];
    int opcion, i = 0, x;
    
    do{

        printf("Digite un numero:\n>>");
        scanf("%d", &array[i]);

        i++;

        printf("Digite cualquier numero para ingresar otro numero, sino digite 0 para cancelar:\n>>");
        scanf("%d", &opcion);
        

    } while(opcion != 0);

    int arrayLen = i;

    printf("Digite el numero que quiere buscar dentro del arreglo:\n>>");
    scanf("%d", &x);

    printf("El numero %d aparece %d veces dentro del arreglo", x, findTheX(array, arrayLen, x));


    return 0;
}