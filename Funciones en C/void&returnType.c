//Una funcion es un bloque de codigo que realiza una tarea especifica.
//Permite escribir un segmento lógico una vez y reutilizarla varias veces.
//Mantiene el código limpio, organizado, fácil de entender y de mantener.

#include <stdio.h>

void hello()
{
    printf("Hola soy Matthew :)\n");
}

int square(int x)
{
    return x * x;
}

int main(void)
{
    //Llamamos la funcion void (saludo)
    hello();

    //Llamamos return-type function
    int result = square(5);

    printf("La raiz cuadrada de 5 es: %d", result);
    

    return 0;
}