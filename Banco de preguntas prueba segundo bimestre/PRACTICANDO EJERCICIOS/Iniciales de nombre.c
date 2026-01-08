//Función que reciba "Nombre Apellido" e imprima solo las iniciales (J.P.). 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitials(char array[]){

    char *nombre = strtok(array, " ");
    char *apellido = strtok(NULL, " ");

    printf("Iniciales: (%c.%c.).\n", toupper(nombre[0]), toupper(apellido[0]));
}

int main(){

    char array[100];

    printf("Digite su nombre y apellido:\n>>");
    fgets(array, sizeof(array), stdin);

    printInitials(array);

    return 0;
}