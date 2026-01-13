#include <stdio.h>

int main(void) {
    int A, B, mcm;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &A);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &B);
    
    if (A <= 0 || B <= 0) {
        printf("Error: Los numeros deben ser positivos.\n");
        return 1;
    }
    
    mcm = (A > B) ? A : B;
    
    while (1) {
        if (mcm % A == 0 && mcm % B == 0) {
            break;  
        }
        mcm++;
    }
    
    printf("El MCM de %d y %d es: %d\n", A, B, mcm);
    
    return 0;
}