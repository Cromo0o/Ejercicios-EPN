#include <stdio.h>

int main(void){

    float num1, num2, num3; 

    printf("Digite el primer numero a comparar: ");
    scanf("%f",&num1);
    
    printf("Digite el segundo numero a comparar: ");
    scanf("%f",&num2);
    
    printf("Digite el ultimo numero a comparar: ");
    scanf("%f",&num3);
    
    
    
    if( (num1 > num2) && (num1 > num3) ){  //  && -> Significa " AND ".

        printf("El %.2f es mayor que el %.2f y %.2f.", num1, num2, num3);

    }
    else if( (num2 > num1) && (num2 > num3) ){

        printf("El %.2f es mayor que el %.2f y %.2f.", num2, num1, num3);

    }
    else if( (num3 > num1) && (num3 > num2) ){

        printf("El %.2f es mayor que el %.2f y %.2f.", num3, num1, num2);

    }
    else{

        printf("Los 3 numeros ingresados son iguales");  //No son iguales necesariamente, existen mas posibilidades

    }

    return 0;

}