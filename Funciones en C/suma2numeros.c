#include <stdio.h>

//1. Automatizar tareas con funciones
void calculateSum(){
    int x = 5, y = 10, sum = x + y;
    printf("The sum of x + y is: %d\n", sum);

}

//2. Suma de dos numeros con parámetros de entrada

int myFunction(int x, int y){
    return x + y;
}


int main(void){

    //1.
    calculateSum();

    //2.
    int result = myFunction(5, 3);
    printf("Result is = %d", result);

    return 0;
}