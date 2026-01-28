//Codificar en C una función que reciba el peso en kg
//y la altura en metros para calcular el IMC
// IMC = peso/altura^2

#include <stdio.h>

float calcIMC(float w, float h){
    float imc = w/(h*h);
    return imc;
}

int main(){
    float heigth, weigth;

    printf("Digite su peso en kg:\n>>");
    scanf("%f", &weigth);

    printf("Digite su altura en metros:\n>>");
    scanf("%f", &heigth);

    float imc = calcIMC(weigth, heigth);

    if (imc < 18.5){
        printf("Bajo peso");
    } else if(imc >= 18.5 && imc <= 24.9){
        printf("Normal");
    } else{
        printf("Sobrepeso");
    }

    return 0;
}