//sacar el promedio de tres notas
#include <stdio.h>

float getAverage (float grade1, float grade2, float grade3 ){

    return (grade1 + grade2 + grade3)/3.0;

}


int main(void){

    float grade1, grade2, grade3;

    printf("Digite su primera nota: ");
    scanf("%f",&grade1);

    printf("Digite su segunda nota: ");
    scanf("%f",&grade2);

    printf("Digite su tercer nota: ");
    scanf("%f",&grade3);

    printf("El promedio es %.2f\n", getAverage(grade1, grade2, grade3));

    return 0;
    
}