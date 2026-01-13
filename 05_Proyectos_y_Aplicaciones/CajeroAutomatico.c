//Simular un cajero automatico
#include <stdio.h>

int main(void)
{
    
    float saldo;
    int opcion;
    
    printf("**CAJERO AUTOMATICO BANCO POLI**\n");
    
    printf("Digite su saldo actual: \n");
    scanf("%f",&saldo); //saldo disponible del cliente
    
    printf("Que es lo que desea hacer?\n");
    printf("Digite el numero de opcion deseada: \n");   //Mostramos un menu de opciones
    printf("1. Depositar dinero\n");
    printf("2. Retirar dinero\n");
    printf("3. Consultar saldo actual\n");
    printf("4. Salir del proceso\n");
    
    scanf("%d",&opcion);
    
    
    switch(opcion){
        
        case 1:
        
            float cDepositar;        //Cantidad a depositar
        
            printf("Digite la cantidad a depositar: \n");
            scanf("%f",&cDepositar);
            
            printf("Su nuevo saldo es de: $%.2f\n",saldo + cDepositar); //Sumamos el dinero a su saldo
            
            printf("Gracias por usar nuestro banco\n");
            
            break;
        
        case 2:
            
            float cRetirar;        //Cantidad a retirar
        
            printf("Digite la cantidad a retirar: \n");
            scanf("%f",&cRetirar);
            
            if ( saldo < cRetirar){
                
                printf("Su saldo es insuficiente para realizar esta transaccion\n");
                
            }
            else{
                
                saldo = saldo - cRetirar;   //Saldo restante
                
                printf("Usted ha retirado $%.2f\n", cRetirar);
            
                printf("Su nuevo saldo es de: $%.2f\n",saldo);
                
                printf("Gracias por usar nuestro banco\n");
                
            }
        
            break;
            
        case 3:
            
            printf("Su saldo actual es de $%.2f\n", saldo);
            
            printf("Gracias por usar nuestro banco\n");
            
            break;
            
        
        case 4:
            
            printf("Gracias por usar nuestro banco\n");
            
            break;    
        
        default:
        
            printf("Digite un numero de opcion valido entre el 1 y el 4\n");
            
            break;
        
    }
    
    return 0;
}