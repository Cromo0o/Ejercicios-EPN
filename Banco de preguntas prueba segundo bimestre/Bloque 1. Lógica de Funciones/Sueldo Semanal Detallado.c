/*

Crea una función que reciba las horas trabajadas por 
día (durante 6 días a la semana) y el pago por hora. 
La función debe calcular el sueldo total de la semana, restar un 12% de impuestos y 
retornar el salario neto final. 

*/
#include <stdio.h>

float netSalary(int hours[6], float payPerHour){

    float salary;
    float taxes;

    for (int i = 0; i < 6; i++)
    {
        salary += hours[i] * payPerHour;

    }
    
    taxes = salary * 0.12;
    salary -= taxes;

    return salary;

}

int main(void){

    int hours[6];
    float payPerHour = 2.01;

    printf("Digite las horas trabajadas durante 6 dias a la semana: ");
    
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &hours[i]);
    }

    printf("El salario neto a recibir es de $%.2f",netSalary(hours, payPerHour));

    return 0;
}