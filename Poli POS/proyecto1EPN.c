#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define IVA 1.15    // (15%  -> 1.15)  (8% -> 1.08)    (0% -> 1.00)

//Detalles de los productos en el catalogo
struct productos{    
    
    char marca[30];
    float precio;
    int stock;
};

//Detalles de los productos para registrar en el carrito
struct factura{

    char marca[30];
    float precio;
    int stock;
};

//Funcion para poder mostrar el catalogo de productos cuando sea necesario
void mostrarCatalogo(struct productos lista[]){
    
    printf("------------------------------------------------\n");
    printf("| ID |      Producto      |  Precio  |  Stock  |\n");
    printf("------------------------------------------------\n");
    for (int i = 0; i < 20; i++) {
        
        printf("| %2d | %-18s | %8.2f | %7d |\n", i + 1, lista[i].marca, lista[i].precio, lista[i].stock);
    
    }
    printf("------------------------------------------------\n");
}




int main(void){

    int i = 0, j = 0, productosTotales = 0, opcionSwitch, opcionIf;
    
    //Cantidad de productos maximos en el carrito
    const int MAX_PRODUCTOS = 5;  

    struct productos lista[20];
    struct factura carrito[10];

    FILE * inventario;
    inventario = fopen("inventario.txt", "r");

    if(inventario != NULL){

        strcpy(lista[0].marca, "Leche Entera");
        strcpy(lista[1].marca, "Pan Integral");
        strcpy(lista[2].marca, "Azucar Blanca");
        strcpy(lista[3].marca, "Arroz");
        strcpy(lista[4].marca, "Huevos");
        strcpy(lista[5].marca, "Cafe Soluble");
        strcpy(lista[6].marca, "Refresco Cola");
        strcpy(lista[7].marca, "Papas Fritas");
        strcpy(lista[8].marca, "Galletas");
        strcpy(lista[9].marca, "Jabon de Tocador");
        strcpy(lista[10].marca, "Detergente Liquido");
        strcpy(lista[11].marca, "Atun en Lata");
        strcpy(lista[12].marca, "Harina de Trigo");
        strcpy(lista[13].marca, "Pasta Dental");
        strcpy(lista[14].marca, "Queso Fresco");
        strcpy(lista[15].marca, "Cornflakes Grande");
        strcpy(lista[16].marca, "Chocoalte en Barra");
        strcpy(lista[17].marca, "Aceite de Girasol");
        strcpy(lista[18].marca, "Agua Embotellada");
        strcpy(lista[19].marca, "Yogurt Natural");

        //Registrar los datos en memoria directo desde un archivo .txt
        for ( i = 0; i < 20; i++){
        
            fscanf(inventario, "%f%d", &lista[i].precio, &lista[i].stock);

        }
    }
    else{

        printf("No se pudo abrir el archivo");

    }
  

inicio:

    printf("\n\n");
    printf("*---------------------------------------------*\n");
    printf("*|    Punto de venta express Kaita Store     |*\n");
    printf("*---------------------------------------------*\n");
    printf("\n");

    printf("Que es lo que desea hacer?\n");
    printf("1. Registrar productos al carrito\n");
    printf("2. Actualizar productos del carrito\n");
    printf("3. Lista de productos en el carrito\n");
    printf("4. Salir\n");
    printf(">>");
    scanf("%d", &opcionSwitch);
    


    switch (opcionSwitch){
        
        //Añadir productos al carrito de compras
        case 1: 

            mostrarCatalogo(lista);

            // Nuevo ciclo: límite por unidades totales en el carrito
            while (1) {
                // Calcular el total de unidades en el carrito
                int unidadesTotales = 0;
               
                for (int k = 0; k < j; k++) {
                    
                    //Se suman los productos actuales independientemente del tipo
                    unidadesTotales += carrito[k].stock;
                
                }

                if (unidadesTotales >= MAX_PRODUCTOS) {
                    
                    printf("CARRITO LLENO. No puedes agregar mas unidades.\n");
                    
                    break;
                }

                printf("Desea agregar un producto?\n");
                printf("1. SI\n2. NO\n>>");
                scanf("%d", &opcionIf);

                if (opcionIf == 2){
                    printf("Volviendo al menu inicial...");
                    sleep(2);
                    break;
                }
                else if(opcionIf == 1){
                    printf("Digite su ID:\n");
                    printf(">>");
                    scanf("%d", &i);
                    i -= 1;

                    // Buscar si el producto ya está en el carrito
                    int encontrado = 0;
                    for (int k = 0; k < j; k++) {
                        if (strcmp(carrito[k].marca, lista[i].marca) == 0) {
                            if (unidadesTotales < MAX_PRODUCTOS) {
                                carrito[k].stock++; //Incrementa el stock
                            }
                            encontrado = 1;
                            break;
                        }
                    }
                    if (!encontrado) {
                        if (unidadesTotales < MAX_PRODUCTOS) {
                            strcpy(carrito[j].marca, lista[i].marca);
                            carrito[j].precio = lista[i].precio;
                            carrito[j].stock = 1; // Primer producto
                            j++;
                        }
                    }
                }
                else{
                    printf("No es una opcion valida, regresando al menu inicial...\n");
                }
            }

            goto inicio;
        
        //
        case 2:  

            printf("Productos registrados: \n");

            //Enlistamos los productos registrados
            for ( int i = 0; i < productosTotales; i++){
                
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

        //Mostrar los productos que se encuentran en el carrito
        case 3:

            printf("---------------------------------------------------\n");
            printf("| ID |      Producto      |  Precio  |  Cantidad  |\n");
            printf("---------------------------------------------------\n");
            
            for (int i = 0; i < j; i++) {
                
                printf("| %2d | %-18s | %8.2f | %7d |\n", i + 1, carrito[i].marca, carrito[i].precio, carrito[i].stock);
            
            }
                
            printf("---------------------------------------------------\n");


            printf("\nVolviendo al menu...\n\n");
            sleep(2);

            goto inicio;

        case 4:

            printf("\n\nGracias por usar nuestro punto de venta :)\n\n");

            break;
    
        default:
        
            printf("No es una opcion valida, vuelva a intentar...");

            goto inicio;
    }    
            
    return 0;
    
}