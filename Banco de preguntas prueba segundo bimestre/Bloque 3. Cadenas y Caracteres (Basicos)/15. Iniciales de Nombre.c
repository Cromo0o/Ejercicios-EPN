/*

Función que reciba "Nombre Apellido" e imprima solo las 
iniciales (J.P.). 

*/
#include <stdio.h>
#include <string.h>

void takeInitials(char string[100]){

    char *name = strtok(string, " ");
    char *lastname = strtok(NULL, " ");

    printf("Iniciales (%c.%c.)\n", name[0], lastname[0]);

}

int main(void){

    char string[100];

    printf("Digite su nombre y apellido: ");
    fgets(string, sizeof(string), stdin);

    takeInitials(string);
    

    return 0;
}