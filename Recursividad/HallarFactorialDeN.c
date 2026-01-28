#include <stdio.h>

int sacarFactorial(int num){
    int retorno;
    
    //Caso Base
    if(num == 0){
        retorno = 1;
    }
    //Caso Recursivo
    else{
        retorno = num * sacarFactorial(num - 1);
    }
    return retorno;
}


int main(){
    int num;

    printf("Digite un numero:\n>>");
    scanf("%d", &num);

    printf("El factorial del numero es: %d", sacarFactorial(num));

    return 0;
}