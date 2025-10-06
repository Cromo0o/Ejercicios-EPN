//Determining whether an integer is positive, negative, or zero. (Spanish)

#include <stdio.h>

int main(void){

    int num; //Definimos una variable como un numero entero, será la que almacene el numero a tratar: num

    printf("Digite el numero a comprobar: ");   //Pedimos el numero al usuario y lo guardamos en la variable anteriormente creada.
    scanf("%d",&num);

    if(num>0){

        printf("El numero %d es positivo",num);     //Si el numero es mayor que cero, imprimir "El numero es positivo".

    }
    else if(num<0){

        printf("El numero %d es negativo",num);     //Si el numero es menor que cero, imprimir "El numero es negativo".

    }
    else{

        printf("El numero es cero");     //Si no se cumple el paso 3 y 4, imprimir "El numero es cero".

    }

    return 0;

}