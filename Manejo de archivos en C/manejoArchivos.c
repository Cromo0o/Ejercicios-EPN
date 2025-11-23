#include <stdio.h>

/*

r ->    Abre para lectura, el archivo debe existir
w ->    Crea o abre para escritura, borra el contenido anterior si es que no existe
a ->    Crear o abre para agregar otra informacion, no borra el contenido anterior
r+ ->   Abre para lectura y escritura, el archivo debe de existir
w+ ->   Crea o abre para lectura o escritura, pero borra el contenido
a+ ->   Abre para leer y agregar sin borrar

*/


int main(void){

    int a, b, c;


    FILE * inventario;
    inventario = fopen("inventario.txt","r"); //retorna NULL si no se puede abrir   //Abro para lectura

    if(inventario != NULL){

        // fscanf -> Del archivo txt guardar en alguna variable del archivo de C
        fscanf(inventario, "%d%d%d", &a, &b, &c);   //Apuntador, tipo de variable, en donde se guarda

        printf("Los valores son: %d %d %d", a, b, c);



        fclose(inventario);
    
    }
    else{

        printf("NO se pudo abrir el archivo");

    }




    return 0;
}