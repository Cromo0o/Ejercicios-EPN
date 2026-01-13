/*

Crea una función que reciba una cantidad en dólares 
y un carácter ('E' para Euro, 'L' para Libras, 'Y' para Yen). Usa estos valores de 
conversión fijos:

1 USD = 0.92 Euros
1 USD = 0.79 Libras
1 USD = 150.00 Yenes

La funcion debe retornar el valor convertido

*/
#include <stdio.h>

float getConversion(float dollars, int option){

    //USD to Euros, USD to libras, USD to yen
    float u2E, u2L, u2Y;
    
    switch (option){
        
        //Euros
        case 'E':

            u2E = dollars * 0.92;
            return u2E;

        break;
        
        //Libras
        case 'L':
            
            u2L = dollars * 0.79;
            return u2L;

        break;

        //Yenes
        case 'Y':

            u2Y = dollars * 150.00;
            return u2Y;
            
        break;
    
    default:

        printf("La opcion ingresada no es valida: ");

        break;
    }
    return 0;
}

int main(void){

    float moneyUSD;
    char option;

    printf("\n\n## Conversor de Modeja Fijo de USD a Euros, Libras o Yenes ##\n");

    printf("Digite la cantidad de USD que desea convertir:\n>>");
    scanf("%f", &moneyUSD);

    printf("A que moneda desea convertir sus USD?\n");
    printf("E. Euros\nL. Libras\nY. Yenes\n");
    printf("Digite E, L o Y dependiendo a lo que quiera convertir:\n>>");
    scanf(" %c", &option);

    if (option == 'E'){

        printf("Sus $%.2f a Euros es: %.2f", moneyUSD, getConversion(moneyUSD, option));

    }
    else if(option == 'L'){

        printf("Sus $%.2f a Libras es: %.2f", moneyUSD, getConversion(moneyUSD, option));

    }
    else if(option == 'Y'){

        printf("Sus $%.2f a Yenes es: %.2f", moneyUSD, getConversion(moneyUSD, option));

    }
    else{

        printf("Opcion ingresada no valida");

    }
    
    return 0;
}