//Program to reverse a two-digit number
#include <stdio.h>

int main(void){

    int n, d1, d2;          // n = original number     d1 = first digit   d2 = second digit

    printf("Enter the number to invert: ");
    scanf("%d",&n);

    d1 = n / 10;

    d2 = n % 10;

    printf("The number %d inverted is %d\n", n, ( d2 * 10 ) + d1);

    return 0;

}