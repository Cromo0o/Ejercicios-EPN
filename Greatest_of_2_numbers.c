//Determining greatest among three numbers
#include <stdio.h>

int main(void){

    float num1, num2;           //Definimos como "float" dos numeros para tener una mayor exactitud para cualquier numero: num1, num2.

    printf("Digite el primer numero a comparar: ");         //Le solicitamos el primer numero y lo guardamos en la variable num1.
    scanf("%f",&num1);

    printf("Digite el segundo numero a comparar: ");         //Le solicitamos el segundo numero y lo guardamos en la variable num2.
    scanf("%f",&num2);

    if(num1 > num2){           //Si el primer numero es mayor que el segundo numero, imprimir "El (num1) es mayor que el (num2)".

        printf("El numero %.2f es mayor que el numero %.2f\n", num1, num2);   //    %.2f -> Para que se muestren solo 2 decimales.

    }
    else if(num2 > num1){          //Si el segundo numero es mayor que el primero, imprimir "El (num2) es mayor que el (num1)".

        printf("El numero %.2f es mayor que el numero %.2f\n", num2, num1);

    }
    else{           //Si no se cumple el paso 4 y 5, imprimir "El (num1) es igual que el numero (num2)".

        printf("Los numeros %.2f y %.2f son iguales\n", num1, num2);

    }

    return 0;

}