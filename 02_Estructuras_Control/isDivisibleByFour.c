#include <stdio.h>

int main(void){

    int num;

    printf("Digite el numero para saber si es divisible para 4: ");
    scanf("%d",&num);

    if( ( num % 100) % 4 == 0 ){

        printf("El numero %d SI es divisible para 4 :D\n", num);

    }
    
    else{

        printf("El numero %d NO es divisible para 4 D:\n", num);

    }

    return 0;
}

