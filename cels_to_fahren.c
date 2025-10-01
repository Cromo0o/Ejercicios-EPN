//celsius to fahrenheit usando una funcion

#include <stdio.h>

float conversion(float temp_cels){

    return (1.8 * temp_cels) + 32; //Pedimos que se regrese la conversion

}

int main(void){

    float temp_cels; //Definimos esta variable para poder ingresar el dato 

    printf("Digita la temperatura actual de Quito en grados celsius: ");
    scanf("%f", &temp_cels); //ingresamos el dato en la variable

    printf("La temperatura de Quito en grados fahrenheit es de: %.2f\n", conversion(temp_cels));  //Llamamos a la funcion para que nos de el resultado   

    return 0;

}