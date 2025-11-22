#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define IVA 1.15    // (15%  -> 1.15)  (8% -> 1.08)    (0% -> 1.00)



struct productos{    
        
    char marca[30];
    float precio;

};


int main(void){

    int i = 0;
    int productosMax = 0;
    int opcionSwitch, opcionIf;

    struct productos lista[10];
    

inicio:

    printf("\n\n");
    printf("*--------------------------------------------*\n");
    printf("*|    Punto de venta express Kaya Store     |*\n");
    printf("*--------------------------------------------*\n");
    printf("\n");

    printf("Que es lo que desea hacer?\n");
    printf("1. Registrar productos (Minimo 1 producto, Maximo 10)\n");
    printf("2. Actualizar productos\n");
    printf("3. Lista de productos\n");
    printf("4. Salir\n");
    printf(">>");
    scanf("%d", &opcionSwitch);
    


    switch (opcionSwitch){
        
        case 1: //Registrar productos

            printf("____________________________________________________\n");

            printf("\nProductos totales ingresados: %d\n\n", productosMax);

            
            //Que ingrese los productos deseados con un limite de 10
            //Tiene la opcion de deterse cuando quiera
        
            while ( productosMax < 10){

                printf("\nDesea ingresar un producto?\n");
                printf("1 -> SI\n");
                printf("2 -> NO\n");
                printf(">>");
                scanf("%d", &opcionIf);


                if (opcionIf == 2){
                    
                    printf("\nVolviendo al menu...\n\n");
                    sleep(2);   //Simulamos como si estuviera cargando
                    goto inicio;    //Regresamos al menu de opciones del punto de venta

                }
                else if(opcionIf == 1){
                
                    //Entrada de la marca del producto
                    printf("\nDigite la marca del producto: \n");
                    printf(">>");
                    getchar();
                    fgets(lista[i].marca, sizeof(lista[i].marca), stdin);

                    //Entrada del precio del producto 
                    printf("\nDigite el precio del producto: \n");
                    printf(">>");
                    scanf("%f", &lista[i].precio);

                    i++;
                    productosMax++;

                }
                else{

                    printf("No es una opcion válida, vuelva a intentar...");

                }
                
                
            }

            printf("____________________________________________________\n");

            goto inicio;
        
        case 2:

            printf("____________________________________________________\n");    

            printf("Productos registrados: \n");

            //Enlistamos los productos registrados
            for ( int i = 0; i < productosMax; i++){
                
                printf("[%d] %s -> $%.2f\n", i + 1, lista[i].marca, lista[i].precio * IVA);
            
            }

            printf("\nDesea actualizar un producto?\n");
            printf("1 -> SI\n");
            printf("2 -> NO\n");
            printf(">>");
            scanf("%d", &opcionIf);


            if (opcionIf == 2){
                    
                printf("\nVolviendo al menu...\n\n");
                sleep(2);   //Simulamos como si estuviera cargando
                goto inicio;    //Regresamos al menu de opciones del punto de venta

            }
            else if(opcionIf == 1){
                
                printf("\nDigite el numero del producto que deseaa actualizar: \n");
                scanf("%d", &i);

                i -= 1;

                printf("\nDigite la marca del producto: \n");
                printf(">>");
                getchar();
                fgets(lista[i].marca, sizeof(lista[i].marca), stdin);

                printf("\nDigite el precio del producto: \n");
                printf(">>");
                scanf("%f", &lista[i].precio);


                printf("\nProducto actualizado...\n");
                printf("\nVolviendo al menu...\n\n");
                    sleep(2);   
                    goto inicio;

                goto inicio;


            }
            else{

                printf("No es una opcion válida, vuelva a intentar...");

            }
            
            break;

            printf("____________________________________________________\n");

            goto inicio;

        case 3:

            printf("____________________________________________________\n");

            printf("\nProductos totales ingresados: %d\n", productosMax);

            printf("Lista de productos registrados: \n");

            for ( int i = 0; i < productosMax; i++){
                
                printf("[%d] %s -> $%.2f\n", i + 1, lista[i].marca, lista[i].precio * IVA);
            
            }

            printf("\nVolviendo al menu...\n\n");
            sleep(2);

            printf("____________________________________________________\n");

            goto inicio;

        case 4:

            printf("\n\nGracias por usar nuestro punto de venta :)\n\n");

            break;
    
        default:
        
            printf("Pan con queso");

            break;
    }



    
    
    

            
            
            

    return 0;
    
}