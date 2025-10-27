//Implicit and explicit conversion of data types
#include <stdio.h>

int main(void){
    
    //  (Transformacion implícita o automática)
    char A = 'A', B = 'B';  //char -> 1 byte
    int numA, numB,sumaLetras;  //int -> 4 bytes
    
    numA = A;       //Valor ASCII de A -> 65
    numB = B;       //Valor ASCII de B -> 66

    sumaLetras = numA + numB;     // La suma de sus valores debe dar 131

    printf(">>  A + B = %d\n", sumaLetras);

/***************************************************************************************/

    //  (Transformacion explícita o manual)
    char letra1, letra2;
    int num1 = 65, num2 = 66;
    
    letra1 = (char)num1;
    letra2 = (char)num2;

    printf(">>  La letra que le pertenece el numero 65 en ASCII es: %c\n", letra1);
    printf(">>  La letra que le pertenece el numero 66 en ASCII es: %c\n\n", letra2);

    return 0;
}