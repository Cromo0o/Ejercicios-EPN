#include <stdio.h>
#include <math.h>

float C_root(float n){

    return exp( (1.0/3.0) * log(fabs(n)) );

}

int main(void){

    float n, C_Root_Negative;     // n = numero // C_Root_Negative = Raiz cubica negativa

    printf("Ingrese el numero a operar: ");
    scanf("%f",&n);

   

    if (n >= 0){

        printf("La raiz cuadrada de %.0f es %.2f\n", n, sqrt(n));

    }
    else{

        printf("La raiz cuadrada de numeros negativos no esta definida en el conjunto de los numeros reales.\n");

    }

    
    if ( n >= 0){

        printf("La raiz cubica de %.0f es %.2f.\n", n, C_root(n));

    }
    else{

        C_Root_Negative = C_root(n) * (-1);
        printf("La raiz cubica de %.0f es %.2f.\n", n, C_Root_Negative);


    }
    
    return 0;

}
