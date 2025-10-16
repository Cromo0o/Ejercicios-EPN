#include <stdio.h>
#include <math.h>

int main(void){

    float n, raizCubica; // n = numero

    printf("Digite el numero que desea operar: ");
    scanf("%f",&n);

    
    //Tomamos ambos casos de raiz cuadrada
    if( n >= 0){    
        printf("La raiz cuadrada de %.0f es: %.2f\n", n, sqrt(n));
    }
    else{
        printf("Las raices cuadradas de numeros negativos no estan definidas en los numeros reales.\n");
    }

    //Calcular raiz cubica utilizando la definicion logaritmica de la raiz
    raizCubica = exp( (1.0/3.0) * log(fabs(n)) );
    
    if( n >= 0){
        printf("La raiz cubica de %.0f es %.2f\n", n, raizCubica);
    }
    else{
        /*
            Se calcula el resultado utilizando valor absoluto
            y se lo muestra como negativo
        */
        raizCubica = raizCubica * (-1);
        printf("La raiz cubica de %.0f es %.2f\n", n, raizCubica);
    }

    return 0;

}