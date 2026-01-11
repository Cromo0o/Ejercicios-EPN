/*

Escribe una función que reciba un número entero. 
La función debe retornar:

-   1 si el número es positivo y además es múltiplo de 3.
-   2 si el número es positivo, pero NO es múltiplo de 3.
-   0 si el número es negativo o cero. 

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int myFunction(int digitos[20], int longitudCadena, int n){

    int sumaDigitos = 0;

    for (int i = 0; i < longitudCadena; i++){
        //Sumar todos los digitos
        sumaDigitos += digitos[i];
    }

    if (n > 0 && (sumaDigitos % 3) == 0){      //Retornar 1 si el número es positivo y además es múltiplo de 3.
        return 1;
    }
    else if(n > 0 && (sumaDigitos % 3) != 0){       //Retornar 2 si el número es positivo, pero NO es múltiplo de 3.
        return 2;
    }
    else if(n <= 0){
        return 0;
    }
    else{
        printf("El numero ingresado no es valido");
    }
    
    return -1;
}

int main(void){

    //Guardo los numeros en una cadena como tipo char
    char numero[20];
    
    //Arreglo para guardar los numeros ya enteros
    int digitos[20];

    //El numero entero sin mas
    int n;

    printf("Digite un numero:\n>>");
    fgets(numero, sizeof(numero), stdin);

    int longitudCadena = strlen(numero) - 1;

    for (int i = 0; i < longitudCadena; i++)
    {
        //Para que no se copie el valor ASCII le restamos '0'
        //Transformamos el numero tipo char a uno tipo int
        digitos[i] = numero[i] - '0';
    }

    //Transformo la cadena de texto a un entero para tener el numero
    n = atoi(numero);

    if(myFunction(digitos, longitudCadena, n) == 1){
        printf("%d\n", myFunction(digitos, longitudCadena, n));
        printf("El numero %d es positivo y es multiplo de 3.", n);
    }
    else if(myFunction(digitos, longitudCadena, n) == 2){
        printf("%d\n", myFunction(digitos, longitudCadena, n));
        printf("El numero %d es positivo y NO es multiplo de 3.", n);
    }
    else if(myFunction(digitos, longitudCadena, n) == 0){
        printf("%d\n", myFunction(digitos, longitudCadena, n));
        printf("El numero %d es negativo o cero", n);
    }
    else{
        printf("El numero ingresado no es valido.");
    }

    return 0;
}