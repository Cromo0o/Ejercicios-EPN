/*

Función que reciba una palabra y cuente cuántas vocales 
tiene en total. 

*/
#include <stdio.h>
#include <string.h>

int countVowels(char string[100], int stringLen){

    const char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    int vowelsCounter = 0;


    //Elige las vocales, de a la a a la u
    for (int i = 0; i < stringLen; i++){
        
        //La vocal elegida la compara con los caracteres de la cadena
        for (int j = 0; j < 10; j++){
            if(string[i] == vowels[j]){
                vowelsCounter++;
            }
        }
    }
    return vowelsCounter;
}

int main(void){

    char string[100];

    printf("Digite una frase para obtener la cantidad de vocales:\n>>");
    fgets(string, sizeof(string), stdin);

    int stringLen = strlen(string);


    printf("La palabra tiene un total de %d vocales.", countVowels(string, stringLen));

    return 0;
}