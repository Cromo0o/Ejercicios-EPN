//Implicit and explicit conversion of data types
#include <stdio.h>

int main(void){
    
    //Transformacion implícita
    char A = 'A', B = 'B';  //char -> 1 byte
    int numA, numB,sumaLetras;  //int -> 4 bytes
    
    numA = A;       //Valor ASCII de A -> 65
    numB = B;       //Valor ASCII de B -> 66

    sumaLetras = numA + numB;     // La suma de sus valores debe dar 131

    printf(" A + B = %d", sumaLetras);

    return 0;
}








