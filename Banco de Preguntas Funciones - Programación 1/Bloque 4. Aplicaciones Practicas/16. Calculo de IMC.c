/*

Crea una función que reciba el peso (kg) y la altura (m). Debe 
calcular el IMC usando la fórmula: 

IMC = peso/altura^2

Bajo peso (<18.5)
Normal (18.5 a 24.9)
Sobrepeso (>= 25)

*/
#include <stdio.h>

void getIMC(float peso, float altura){

    float IMC = peso / (altura * altura);

    if (IMC < 18.5){
        printf("Con un IMC de %.2f, usted tiene bajo peso\n", IMC);
    }
    else if( IMC >= 18.5 && IMC <= 25){
        printf("Con un IMC de %.2f, usted se encuentra saludable\n", IMC);
    }
    else if(IMC >= 25){
        printf("Con un IMC de %.2f, usted tiene sobrepeso\n", IMC);
    }
    else{
        printf("Valor ingresado no valido\n");
    }
}

int main(void){

    float weight, height;

    printf("--Calculadora de tu IMC--\n");
    
    printf("Digite cuanto pesa actualmente en kg:\n>>");
    scanf("%f", &weight);
    
    printf("Digite cual es su estatura en metros:\n>>");
    scanf("%f", &height);
    
    getIMC(weight, height);

    return 0;
}