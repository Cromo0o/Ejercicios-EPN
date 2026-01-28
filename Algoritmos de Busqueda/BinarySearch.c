/*
Para que se pueda aplicar la búsqueda binaria a un arreglo
Este debe estar previamente ordenado ascendentemente.

Se trata de dividir el espacio de búsqueda en sucesivas mitades hasta
encontrar el elemento buscado o hasta que ya no pueda hacer más mitades.

Localizamos la mitad del arreglo y voy a ver si el elemento que estoy buscando
es igual al elemento que está en la mitad del arreglo.
Si es igual, se encontró.
Sino, verifico si el elemento que estoy buscando es mayor o menor que el elemento que está en la mitad del arreglo.
Si es mayor, mi elemento va a estar en la parte derecha
Si es menor, mi elemento va a estar en la parte izquierda
Localizo la mitad y verifico si es el elemento que busco, sino busco la mitad entre esos dos y repito.
*/
#include <stdio.h>

int main(){
    int arr[5] = {3, 4, 5, 6, 7};
    int n = 7;
    int posicion;

    int encontrado = 0;     //1 verdadero, 0 falso
    int inferior = 0;       //Limite inferior
    int superior = 5;       //Limite superior, comienza en el numero de elemento, no en el limite del arreglo
    int i = 0;
    
    //Obtener la mitad
    int mitad = (inferior + superior)/2;
    while ((inferior <= superior) && (i < 5) && (encontrado == 0)){
        if(arr[mitad] == n){
            encontrado = 1;
            posicion = mitad;
        } else if(arr[mitad] > n){  //Parte izquirda del arreglo
            superior = mitad;
            mitad = (inferior + superior)/2;
        } else{     // Parte derechca del arreglo
            inferior = mitad;
            mitad = (inferior + superior)/2;
        }
        i++;
    }
    
    printf("El numero se encuentra en el indice %d", posicion);

    return 0;
}