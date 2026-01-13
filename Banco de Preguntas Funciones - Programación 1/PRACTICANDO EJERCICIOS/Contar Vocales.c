//Función que reciba una palabra y cuente cuántas vocales tiene en total
#include <stdio.h>

int vowelCounter(char array[]){

    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int vowelCounter = 0;

    for (int i = 0; i < 10; i++){
        
        //Revisar desde la posición 0 hasta el final de la cadena
        for (int j = 0; array[j] != '\0'; j++){
            if(array[i] == vowels[j]){
                vowelCounter++;
            }
        }
    }
    return vowelCounter;
}

int main(void){

    char chain[100];

    printf("Digite una palabra: ");
    fgets(chain, sizeof(chain), stdin);

    printf("Frase ingresada: %s", chain);
    printf("Su frase tiene un total de: %d vocales", vowelCounter(chain));

    return 0;
}