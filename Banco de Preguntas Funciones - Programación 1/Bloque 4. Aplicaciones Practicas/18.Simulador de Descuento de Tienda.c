/*

Si el cliente compra más de 5 artículos, 
recibe un 15% de descuento. Función que reciba precio unitario y cantidad, y 
retorne el total. 

*/
#include <stdio.h>

float getDiscount(float unitPrice, int amount){

    float total;

    if(amount > 5){
        total = (unitPrice * amount) - ((unitPrice * amount) * 0.15);
    }
    else{
        total = unitPrice * amount;
    }

    return total;
}

int main(){

    int articulos;
    float precio;

    printf("## Calculadora de descuento ##\n");

    printf("Digite cuantos articulos va a llevar el cliente:\n>>");
    scanf("%d", &articulos);
    printf("Digite el precio del producto a llevar:\n>>");
    scanf("%f", &precio);

    printf("El precio a pagar es de: $%.2f", getDiscount(precio, articulos));

    return 0;
}
