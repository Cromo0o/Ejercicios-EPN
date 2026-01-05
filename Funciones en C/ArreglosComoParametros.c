//Pasar arreglos como parametros a la funcion

#include <stdio.h>

void myFunction(int myNumbers[5]) {
    for(int i = 0; i < 5; i++){
        printf("%d\n", myNumbers[i]);
    }
}

int main(void){

    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction(myNumbers);

    return 0;
}