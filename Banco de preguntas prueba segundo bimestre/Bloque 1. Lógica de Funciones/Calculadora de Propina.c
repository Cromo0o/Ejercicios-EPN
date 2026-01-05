/*

Crea una función que reciba el total de una cuenta y un 
número entero (1, 2 o 3) que representa el nivel de satisfacción (1: 10%, 2: 15%, 
3: 20%). La función debe retornar el monto total a pagar. 

*/

#include <stdio.h>

float venta(float subtotal, int num){

    float total;

    if(num == 1){
        total = subtotal * 1.10;
    }
    else if(num == 2){
        total = subtotal * 1.15;
    }
    else if(num == 3){
        total = subtotal * 1.20;
    }
    else{
        return 0;
    }

    return total;
}

int main(void){

    int num;
    float subtotal;

    printf("Digite el total de la cuenta: \n>>");
    scanf("%f", &subtotal);
    printf("Digite el nivel de satisfaccion:\n");
    printf("1. 10%% de propina\n2. 15%% de propina\n3. 20%% de propina\n>>");
    scanf("%d", &num);

    if (venta(subtotal, num) == 0){
        printf("El valor de satisfaccion ingresado no es valido.");
    }
    else{
        printf("Subtotal: $%.2f\n", subtotal);
        printf("Total con propina: $%.2f", venta(subtotal, num));
    }

    return 0;
}

