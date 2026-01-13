/*

Escribe una función que reciba una cadena y un carácter 
(ej: 'e'). La función debe retornar cuántas veces aparece ese carácter específico en 
la cadena. 

*/
#include <stdio.h>
#include <string.h>

int searchRepeated(char str[100], int X, int stringLen){

    int charCounter = 0;

    for (int i = 0; i < stringLen ; i++){
        
        if(str[i] == X){
            charCounter++;
        }
    }
    return charCounter;
}  

int main(void){

    char str[100];
    char X;

    printf("Digite una frase cualquiera:\n>>");
    fgets(str, sizeof(str), stdin);

    int stringLen = strlen(str);

    // Limpiar el buffer para evitar que el salto de línea afecte la lectura del carácter
    getchar();

    printf("Digite el caracter a buscar:\n>>");
    scanf("%c", &X);

    printf("En la cadena: %s", str);
    printf("La letra '%c' se repite %d veces", X, searchRepeated(str, X, stringLen));

    return 0;
}