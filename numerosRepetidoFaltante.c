#include <stdio.h>

int main(void)
{
    int n;
    
    //Ingreso y validación de la entrada
    
    do{
        printf("\nIngrese el tamanio del arreglo: ");
        scanf("%d", &n);
        
        if(n < 1){
            
            printf("El tamanio del arreglo no es valido, intente nuevamente: \n");
        }
        else{
            
            printf("El tamanio del arreglo es: %d \n",n);
        }
        
        
    }while(n < 1);
    
    //Arreglo a tratar
    
    int arr[n];
    
    printf("\nIngrese %d valores entre 1 y %d: \n", n, n);
    
    for(int i = 0; i < n; i++){
        
        scanf("%d", &arr[i]);
    
    }
    
    printf("\nSus valores ingresados son: \n");
    
    for(int i = 0; i < n; i++){
        
        printf("%d ", arr[i]);
    
    }
    
    //Crear un vector de frecuencias asociado

    int freq[n+1];
    
    for(int i = 0; i <= n + 1; i++){
        
        freq[i] = 0;
    
    }
    

    //Contar Frecuencias

    for (int i = 0; i <= n; i++){
        
        if(arr[i] >= 1 && arr[i] <= n){
            
            freq[arr[i]]++;
        
        }
    }
   

   printf("\nVector de frecuencias (actualizado): \n");
    for(int i = 0; i <= n ; i++){
        
        printf("freq[%d] = %d\n", i, freq[i]);
    
    }

    //Numeros repetido y faltantes
    
    printf("\nValores repetidos: ");
    
    for(int i = 1; i <= n ; i++){
        
        if(freq[i] > 1){
            
            printf("%d ", arr[i]);
        }
    }
   
    printf("\nValores faltantes: ");
    for(int i = 1; i <= n ; i++){
        
        if(freq[i] == 0){
            
            printf("%d ", i );
        
        }
    }
   
    return 0;
}