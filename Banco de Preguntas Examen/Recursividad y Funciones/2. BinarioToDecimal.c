//Codificar en C una función recursiva que permita ingresar un numero
//binario (base2) y transformarlo a numero decimal base 10

// 16 8 4 2 1           -> Valor de las Posiciones 
//  | | | | |
//  1 1 0 0 1           -> El numero binario

// (1*16) + (1*8) + (4*0) + (2*0) + (1*1)
//   16 + 8 + 0 + 0 + 1
//   16 + 8 + 1 = 25

// 2^4 + 2^3 + 0 + 0 + 2^0
/*
11001
1
0
0
1
1

*/
#include <stdio.h>
#include <math.h>

// Función recursiva: num es el binario, pos es la potencia (empieza en 0)
int convertToDecimal(int num, int pos) {
    if (num == 0)
        return 0;
    else
        return (num % 10) * pow(2, pos) + convertToDecimal(num / 10, pos + 1);
}

int main() {
    int num;
    printf("Digite el numero a convertir:\n>>");
    scanf("%d", &num);
    
    printf("El numero decimal es: %d\n", convertToDecimal(num, 0));

    return 0;
}
