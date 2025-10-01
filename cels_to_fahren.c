//celsius to fahrenheit usando una funcion

#include <stdio.h>

float conversion(float temp_cels){

    return (1.8 * temp_cels) + 32;

}


int main(void){

    float temp_cels;

    printf("Digita la temperatura actual de Quito en grados celsius: ");
    scanf("%f", &temp_cels);

    printf("La temperatura de Quito en grados fahrenheit es de: %.2f\n", conversion(temp_cels));

    return 0;

}