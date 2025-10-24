//Calculate the hypotenuse of a right triangle given two legs.
#include <stdio.h>
#include <math.h>

int main(void){

    float legA, legB, hypC;

    printf("* Calculate the hypotenuse of a right triangle *\n");
    printf("Enter the first leg of your triangle in cm: ");
    scanf("%f",&legA);

    printf("Enter the second leg of your triangle in cm: ");
    scanf("%f",&legB);

    hypC = sqrt( (legA * legA) + (legB * legB) );
    
    printf("The hypotenuse of your triangle is: %.2f cm\n", hypC);
    
    return 0;

}
