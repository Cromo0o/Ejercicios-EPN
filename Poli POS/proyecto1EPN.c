#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define IVA 0.15    // (15%  -> 0.15)  (8% -> 0.08)    (0% -> 0.00)

//Funcion para abrir la caja o mantenerla cerrada
//Encargada de dar paso a que funcione todo el programa
int abrirCaja(int estadoCaja) {
    
    int opcion;

    if (estadoCaja == 1) {
        
        printf("\n##  CAJA ABIERTA  ##\n");
        printf("Muchos exitos en su turno\n");
        return 1;
    
    }

    //Si estadoCaja == 0 pues la caja inicialmente esta cerrada
    printf("\n##  CAJA CERRADA  ##\n");
    printf("Digite 1 para abrirla y empezar el turno (0 para cancelar): \n");
    printf(">>");
 
    if (scanf("%d", &opcion) != 1) {
        
        printf("Error de entrada.\n\n");
        return 0;

    }

    if (opcion == 1) {
        
        printf("\n##  CAJA ABIERTA  ##\n");
        printf("Muchos exitos en su turno\n\n");
        return 1;
    
    } else {
        
        printf("\n##  TURNO NO INICIADO  ##\n");
        printf("\nLa caja permanece cerrada.\n\n");
        return 0;
    
    }
}

//Detalles de los productos en el catalogo
struct productos{    
    
    char marca[30];
    float precio;
    int stock;
    int necesidad;
    float iva;
};

//Detalles de los productos para registrar en el carrito
struct factura{

    char marca[30];
    float precio;
    int stock;
    int necesidad;
    float iva;
};

//Funcion para poder mostrar el catalogo de productos
void mostrarCatalogo(struct productos lista[]){
    
    printf("------------------------------------------------\n");
    printf("| ID |      Producto      |  Precio  |  Stock  |\n");
    printf("------------------------------------------------\n");
    for (int i = 0; i < 20; i++) {
        
        printf("| %2d | %-18s | $%.2f | %7d |\n", i + 1, lista[i].marca, lista[i].precio, lista[i].stock);
    
    }
    printf("------------------------------------------------\n");
}

//Funcion para poder mostrar el carrito de compras
void mostrarCarrito(struct factura carrito[], int j){   
    printf("---------------------------------------------------\n");
    printf("| ID |      Producto      |  Precio  |  Cantidad  |\n");
    printf("---------------------------------------------------\n");
            
        for (int i = 0; i < j; i++) {
                
            printf("| %2d | %-18s | $%.2f | %7d |\n", i + 1, carrito[i].marca, carrito[i].precio, carrito[i].stock);
            
        }
                
        printf("---------------------------------------------------\n");
}

int main(void){


    
        int estadoCaja = 0;         // 0 = Cerrada     1 = Abierta
        int i = 0, j = 0, opcionSwitch, opcionIf;   //j será el numero total de productos
        float totalProductosIVA, totalProductosNoIVA, totalVentas, subtotal;
        float acumuladoSinIVA = 0, acumuladoIVA = 0, acumuladoConIVA = 0;
        const int MAX_PRODUCTOS = 10;  
        
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
            for ( i = 0; i < 20; i++){
                fscanf(inventario, "%f%d%d", &lista[i].precio, &lista[i].stock, &lista[i].necesidad);
            }
        } else {
            printf("No se pudo abrir el archivo");
        }

        //Apertura y cierre de caja
        while (1) {
            
            // Si la caja está cerrada, preguntar si se desea abrir
            
            while (estadoCaja == 0) {
               
                estadoCaja = abrirCaja(estadoCaja);
                
                if (estadoCaja == 0) {
                    
                    printf("La caja sigue cerrada. Desea intentar abrirla (1=Si, 0=Salir): ");
                    int seguir;
                    
                    if (scanf("%d", &seguir) != 1 || seguir == 0) {
                        printf("Gracias por usar nuestro cajero.\n");
                        return 0;
                    }
                }
            }

            
        inicio:
            printf("\n\n");
            printf("*---------------------------------------------*\n");
            printf("*|    Punto de venta express Kaita Store     |*\n");
            printf("*---------------------------------------------*\n");
            printf("\n");

            printf("Que es lo que desea hacer?\n");
            printf("1. Agregar productos al carrito\n");
            printf("2. Borrar productos del carrito\n");
            printf("3. Lista de productos en el carrito\n");
            printf("4. Actualizar productos del catalogo\n");
            printf("5. Facturar productos\n");
            printf("6. Entregar reporte general de la caja y cerrar caja\n");
            printf(">>");
            scanf("%d", &opcionSwitch);

        
        switch (opcionSwitch){
            
            //Añadir productos al carrito de compras
            case 1: 

                mostrarCatalogo(lista);

                //Límite por unidades totales en el carrito
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

                        // Verificar si hay stock disponible en el catálogo
                        if (lista[i].stock <= 0) {
                            
                            printf("No hay stock disponible de ese producto en el catalogo.\n");
                            continue;
                        }
                        
                        // Buscar si el producto ya está en el carrito
                        int encontrado = 0;
                        for (int k = 0; k < j; k++) {
                            
                            if (strcmp(carrito[k].marca, lista[i].marca) == 0) {
                                
                                if (unidadesTotales < MAX_PRODUCTOS) {
                                    
                                    carrito[k].stock++; //Incrementa el stock en el carrito
                                    lista[i].stock--;   //Resta el stock en el catálogo
                                    
                                    if (lista[i].stock == 0) {
                                        
                                        printf("Ya no quedan unidades de %s en el catalogo...\n", lista[i].marca);
                                    }
                                }
                                encontrado = 1;
                                break;
                            }
                        }

                        //Si es nuevo producto
                        if (!encontrado) {
                            
                            if (unidadesTotales < MAX_PRODUCTOS) {
                                
                                strcpy(carrito[j].marca, lista[i].marca);
                                carrito[j].precio = lista[i].precio;
                                carrito[j].necesidad = lista[i].necesidad;
                                carrito[j].stock = 1; // Primer producto
                                lista[i].stock--;      //Resta el stock en el catálogo
                                
                                if (lista[i].stock == 0) {
                                    
                                    printf("Ya no quedan unidades de %s en el catalogo...\n", lista[i].marca);
                                }
                                j++;
                            }
                        }
                    }
                    else{
                        printf("No es una opcion valida, regresando al menu inicial...\n");
                    }
                }

                goto inicio;
            
            
            //Borrar productos del carrito
            case 2:  

                mostrarCarrito(carrito, j);

                printf("\nDesea borrar algun producto?\n");
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
                    
                    int unidadesBorrar;  //Unidades a borrar
                
                    printf("\nDigite el ID del producto que deseaa borrar: \n");
                    printf(">>");
                    scanf("%d", &i);

                    i -= 1;

                    if ( ( i >= 0 ) && ( i <= j ) ){

                        printf("Cuantas unidades de %s desea borrar, actualmente tiene %d\n", carrito[i].marca, carrito[i].stock);
                        printf(">>");
                        scanf("%d", &unidadesBorrar);

                        if (unidadesBorrar <= carrito[i].stock){
                            
                            lista[i].stock += unidadesBorrar; //Regresamos los items al catalogo
                            carrito[i].stock -= unidadesBorrar; //Borramos la cantidad deseada del carrito
                        
                            if (carrito[i].stock == 0){
                            
                                for (int k = i; k < j - 1; k++){

                                    carrito[k] = carrito [k + 1];

                                }
                                
                                j--;
                            }
                            
                            
                            
                            
                            
                            printf("\nCarrito actualizado correctamente\n");
                            printf("\nVolviendo al menu...\n\n");
                            sleep(2);
                        }
                        else{

                            printf("No se pueden borrar mas unidades de las que hay");
                            printf("\nVolviendo al menu...\n\n");
                            sleep(2);

                        }



                    }
                    else{
                        
                        printf("Este ID no es valido");
                        printf("\nVolviendo al menu...\n\n");
                        sleep(2);
                        
                    }

                    
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

                mostrarCarrito(carrito, j);


                printf("\nVolviendo al menu...\n\n");
                sleep(2);

                goto inicio;

            //Actualizar productos del catalogo 
            case 4:

                mostrarCatalogo(lista);

                printf("\nDesea actualizar algun producto?\n");
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
                    
                    int stockActualizar;  //Unidades a actualizar
                    float precioActualizar; //Actualizar a un nuevo precio
                
                    printf("\nDigite el ID del producto que deseaa actualizar: \n");
                    printf(">>");
                    scanf("%d", &i);

                    i -= 1;

                    if ( ( i >= 0 ) && ( i <= 20 ) ){

                        printf("El precio actual de %s es de $%.2f, que nuevo precio desea poner?\n", lista[i].marca, lista[i].precio);
                        printf(">>");
                        scanf("%f", &precioActualizar);

                        if (precioActualizar >= 0.00){
                            
                            lista[i].precio = precioActualizar;    //Actualizamos el stock
                            
                        }
                        else{

                            printf("La cantidad a ingresar debe ser mayor o igual que cero");
                            printf("\nVolviendo al menu...\n\n");
                            sleep(2);

                        }
                        
                        printf("Cuantas unidades de %s desea poner, actualmente tiene %d\n", lista[i].marca, lista[i].stock);
                        printf(">>");
                        scanf("%d", &stockActualizar);

                        if (stockActualizar >= 0){
                            
                            lista[i].stock = stockActualizar;    //Actualizamos el stock
                            
                            printf("\nCatalogo actualizado correctamente\n");
                            printf("\nVolviendo al menu...\n\n");
                            sleep(2);
                        }
                        else{

                            printf("La cantidad a ingresar debe ser mayor o igual que cero");
                            printf("\nVolviendo al menu...\n\n");
                            sleep(2);

                        }



                    }
                    else{
                        
                        printf("Este ID no es valido");
                        printf("\nVolviendo al menu...\n\n");
                        sleep(2);
                        
                    }

                    
                    goto inicio;

                }
                else{

                    printf("No es una opcion válida, vuelva a intentar...");

                }
     
                goto inicio;
            
            
            //De los productos en el carrito, mostrar el precio final y culminar la venta

            case 5:
                
                mostrarCarrito(carrito, j);    

                totalProductosIVA = 0;      //Solo la suma del IVA
                totalProductosNoIVA = 0;    //Solo la suma de los precios sin IVA
                totalVentas = 0;
                subtotal = 0;

                for ( i = 0; i < j; i++){
                    
                    totalProductosNoIVA = (carrito[i].stock * carrito[i].precio);

                    subtotal += totalProductosNoIVA;

                }
                
                for ( i = 0; i < j; i++){
                    
                    if (carrito[i].necesidad == 1){
                        
                        //Calcula unicamente el 15% del IVA de cada producto ingresado
                        carrito[i].iva = (carrito[i].stock * carrito[i].precio) * IVA;

                        totalProductosIVA += carrito[i].iva;

                    }

                }

                totalVentas = subtotal + totalProductosIVA;

                acumuladoSinIVA += subtotal;
                acumuladoIVA += totalProductosIVA;
                acumuladoConIVA += totalVentas;     

                printf("Generando factura...\n\n");
                sleep(2);
                
                printf("*---------------------------------------------*\n");
                printf("*|           FACTURA - KAITA STORE            |*\n");
                printf("*---------------------------------------------*\n");
                
                printf("\n##  SUBTOTAL: %.2f\n", subtotal);
                printf("##  IVA: %.2f\n", totalProductosIVA);
                printf("##  VALOR TOTAL: %.2f\n\n\n", totalVentas);

                //Finalizada la venta borramos el carrito actual para que se pueda generar una nueva venta
                
                for (int k = 0; k < j; k++) {
                    carrito[k].stock = 0;
                    carrito[k].precio = 0;
                    carrito[k].necesidad = 0;
                    strcpy(carrito[k].marca, "");
                }
                
                j = 0;

                printf("\n## Carrito vaciado. Listo para la siguiente venta. ##\n");

                goto inicio;
            
            //Modulo de reportes y cierre de caja    
            case 6:

                //Mostramos una alerta en caso de haber menos de 5 productos en el catalogo
                for ( i = 0; i < 20; i++){
                    
                    if (lista[i].stock <= 5){
                        
                        printf("\nAlerta!!.. Stock bajo del producto '%s', quedan %d unidades\n", lista[i].marca, lista[i].stock);
                        
                    }
                }
                
                printf("\n--- REPORTE TOTAL DE VENTAS DEL TURNO ---\n");
                printf("Total ventas sin IVA: $%.2f\n", acumuladoSinIVA);
                printf("Total ventas con IVA: $%.2f\n", acumuladoConIVA);
                printf("Total IVA recaudado: $%.2f\n", acumuladoIVA);
                printf("Total recaudado en el turno: $%.2f\n", acumuladoConIVA);


                printf("\n\nGracias por usar nuestro punto de venta :)\n\n");
                estadoCaja = 0;
                // Al cerrar la caja, volver al bucle principal para preguntar si se desea abrirla de nuevo
                continue;
            
            
            //Caso de haber digitado un numero de forma incorrecta
            default:

                printf("No es una opcion valida, vuelva a intentar...");

                goto inicio;
        }   

    }
            
    return 0;
    
}