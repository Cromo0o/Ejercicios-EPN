/*

& ->    AND binario     (Si ambos bits son 1, el bit resultante sera 1, sino todo 0)
| ->    OR binario
^ ->    XOR binario

<<      Desplazamiento a la izquierda
>>      Desplazamiento a la derecha

~       Complemento a 1


*DECIMAL A BINARIO*
Poner 0 para un par y un 1 para impar
    127/2 sucesivamente -> 63  31  15   7   3   1
                           1    1  1    1   1   1  
    El numero binario se lee desde el final hasta el inicio: 111111


int tiene 4 byes (32 bits)

*/
#include <stdio.h>

int main(void){

/*                           ---Operador AND---
Pone a cero todos los bits de N, excepto los 7 bits de más bajo orden

12277 -> 1011111'1110101'           Agarra los ultimos 7
127   -> '1111111'                  Agarra los ultimos 7

        1110101
        1111111
        -------
        1110101
    Este nuevo conjunto de binarios es igual a 117

*/

int n = 12277;
n = n & 127;

printf("Con AND. El nuevo numero es: %d\n",n);



/*                           ---Operador OR--- El XOR funciona igual solo que cuando es 1 1 = 0 y 0 0 = 0
Pone a cero todos los bits de N, excepto los 7 bits de más bajo orden

12277 -> 10111111110101           Agarra al mayor
127   -> 00000001111111           Completa con ceros en base al mayor

        10111111110101
        00000001111111
        --------------
        10111111111111
    Este nuevo conjunto de binarios es igual a 12287

*/

int x = 12277, SET_ON = 127;

x = x | SET_ON;

printf("Con OR. El nuevo numero es: %d\n",x);



/*                           ---    x<<2    ---

Significa que en ese numero en su formato en binario yo añado dos bits (dos 0) al final de su binario.
Por cada cero que añado el numero se multiplica por 2

x = 12277         bin =     10111111110101

x<<2              bin = 10111111110101'00'

El nuevo x es el numero 12277 multiplicado por 4 porque añadi dos ceros: 49108

*/

/*                           ---    x>>3    ---

Significa que en ese numero sus ultimos 3 bits se van a perder
En este caso estamos diviendo el numero entre dos por cada bit que se mueve

x = 12277         bin = 10111111110101

x>>3              bin =    10111111110

*/

    int z = 25;

    printf("El numero 25 multiplicado por 4 es: %d\n", z<<4);
    printf("El numero 25 dividido por 4 es: %d\n", z>>4);
    



}