//Paso de parametros por referencia (punteros)

//Se utiliza un puntero como parametros para recibir direccion del dato.
//Permite acceder y modificar el contenido de una locacion de memoria.
//Los cambios se ven reflejados en el valor original.
#include <stdio.h>


//Funcion que toma parametros por puntero
void func(int* val){
    *val = 123;
}

int main(void){

    int x = 1;

    //Pasando direccion de x
    func(&x);
    printf("%d", x);

    return 0;
}