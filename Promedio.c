//sacar el promedio de tres notas
#include <stdio.h>

int main(void){

    float grade1, grade2, grade3, average;

    printf("Digite su primera nota: ");
    scanf("%f",&grade1);

    printf("Digite su segunda nota: ");
    scanf("%f",&grade2);

    printf("Digite su tercer nota: ");
    scanf("%f",&grade3);

    average = (grade1 + grade2 + grade3)/3.0;

    printf("El promedio es %.2f\n",average);

    return 0;
    
}