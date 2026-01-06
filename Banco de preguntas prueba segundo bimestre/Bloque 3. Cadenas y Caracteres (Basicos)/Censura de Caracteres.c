/*

Crea una función que reciba una cadena y reemplace 
todos los espacios en blanco por un guion bajo (_).

*/
#include <stdio.h>
#include <string.h>

void replaceChar(char string[100]){

    int strLen = strlen(string);

    for (int i = 0; i < strLen; i++){
        
        if(string[i] == ' '){
            string[i] = '_';
        }

    }
    
    printf("Espacios corregidos: \n");
    printf("%s", string);

}

int main(void){

    char string[100];

    printf("Digite una frase cualquiera: ");
    fgets(string, sizeof(string), stdin);

    replaceChar(string);

    return 0;
}