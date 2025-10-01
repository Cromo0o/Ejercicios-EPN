#include <stdio.h>

float area(float base, float height){

    return base * height;

}

float perimeter(float base, float height){

    return (base * 2) + (height * 2);

}

int main(void){

    float base;
    float height; 

    printf("Digite cuanto mide la base del rectangulo: ");
    scanf("%f", &base);
    
    printf("Digite cuanto es la altura del rectangulo: ");
    scanf("%f", &height);

    printf("El area del triangulo mide: %.2f\n",area(base,height));
    printf("El perimetro del triangulo mide: %.2f\n",perimeter(base,height));
    
}