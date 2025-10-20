//Program to calculate the square root and cube root of a number

#include <stdio.h>
#include <math.h>

float C_root(float n){

    return exp( (1.0/3.0) * log(fabs(n)) );

}

float sacarParteDecimal(float option2, int option){
    
    option = trunc(option2);     //Obtemenos solo el valor entero

    return option;
}


int main(void){

    float n, C_Root_Negative, option2, PD_Option2;     // n = numero   C_Root_Negative = Raiz cubica negativa option = opcion deseada  
    int repeat, option;                   // repeat = guardar numero que repita proceso o no

    do {
        
        printf("* PROGRAMA PARA CALCULAR LA RAIZ CUADRADA Y CUBICA DE UN NUMERO\n");
        printf("1. Raiz Cuadrada :)\n");
        printf("2. Raiz Cubica :D\n");
        printf(">>");
        scanf("%d",&option2);
        
        switch (option){
            
            case 1:

                printf("Digite el numero a calcular: ");
                scanf("%f",&n);

                if ( n < 0 ){      // Using guard clauses

                    printf("* La raiz cuadrada de numeros negativos no esta definida en el conjunto de los numeros reales. *\n");
                    
                }
                else{

                    printf("La raiz cuadrada de %.0f es %.2f\n", n, sqrt(n));

                }

                break;

            case 2:
                
                printf("Digite el numero a calcular: ");
                scanf("%f",&n);
                
                if ( n >= 0){
                
                    printf("La raiz cubica de %.0f es %.2f.\n", n, C_root(n));

                }
                else{

                    C_Root_Negative = C_root(n) * (-1);
                    printf("La raiz cubica de %.0f es %.2f.\n", n, C_Root_Negative);

                }

                break;

        }
        
        printf("Desea volver a repetir el programa? NO = Digite 0, SI = Digite cualquier otro numero\n");
        printf(">>");
        scanf("%d",&repeat);

    } while (repeat != 0);

    return 0;

}