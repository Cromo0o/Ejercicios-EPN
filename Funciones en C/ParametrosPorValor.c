//Paso de parametros por valor

/*

En este método, se pasa una copia del argumento a la función. La
función trabaja sobre esta copia, por lo que los cambios hechos al
parámetro dentro de la función no afecta al argumento original.

*/
#include <stdio.h>

void func(int val) {

    //Cambiando el valor (value)
    val = 123;
}

int main(void){
    int x = 1;

    //Pasando x por value a la funcion func()
    //Se pasa una copia de x
    func(x);
    printf("%d", x);

    return 0;
}