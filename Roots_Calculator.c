#include <stdio.h>
#include <math.h>

int main(void){

    float n, C_Root; // n = number, C_Root = cubic root

    printf("Enter the number to be operated on: ");
    scanf("%f",&n);

    C_Root = pow(n, (1.0/3.0));

    printf("The square root of %.0f is %.2f\n", n, sqrt(n));
    printf("The cube root of %.0f is %.2f\n", n, C_Root);
    
    return 0;

}
