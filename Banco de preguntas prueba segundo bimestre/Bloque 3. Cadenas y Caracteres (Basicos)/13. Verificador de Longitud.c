/*

Función que reciba una cadena y verifique si tiene al 
menos 8 caracteres. Retorna 1 (válida) o 0 (inválida). 

*/
#include <stdio.h>
#include <string.h>

int checkMinimum(char str[100]){

    int strLen = strlen(str);
    int lastChar = strLen - 1;

    if (str[lastChar] == '\n'){
        str[lastChar] = '\0';
        strLen = strlen(str);
    }

    if(strLen >= 8){
        return 1;
    }

    return 0;
}

int main(void){

    char str[100];

    printf("Digite una frase cualquiera:\n>>");
    fgets(str, sizeof(str), stdin);

    printf("Frase ingresada: %s", str);

    if (checkMinimum(str) == 0){
        printf("%d\n", checkMinimum(str));
        printf("La frase ingresada NO cumple con el minimo de 8 caracteres");
    }
    else{
        printf("%d\n", checkMinimum(str));
        printf("La frase ingresada cumple con el minimo de 8 caracteres");
    }

    return 0;
}