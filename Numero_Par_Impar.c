//saber si un numero es par o impar
#include <stdio.h>

int main(void){

    int num;

    printf("Digite un numero para saber si es par o impar: ");
    scanf("%d",&num);

    if(num % 2 == 0){

        printf("El numero %d es par :)",num);

    }
    else{

        printf("El numero %d es impar :(",num);

    }

    
    return 0;
}