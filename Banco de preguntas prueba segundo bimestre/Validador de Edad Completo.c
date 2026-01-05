/*

Escribe una función que reciba el año de 
nacimiento y el año actual. La función debe: 

1) Calcular la edad actual. 
2) Imprimir si la persona es "Mayor de edad" o "Menor de edad" basándose en el 
cálculo. 

*/
#include <stdio.h>

void valEdad(int birth, int currentYear){

    //current age
    int cAge = currentYear - birth;

    //minor or adult
    if (cAge >= 18){
        printf("You are of legal age, with %d years old", cAge);
    }
    else{
        printf("You are a minor, with %d years old", cAge);
    }

}

int main(void){

    int birth, currentYear;

    printf("Enter your year of birth:\n>>");
    scanf("%d", &birth);

    printf("Enter the current year:\n>>");
    scanf("%d", &currentYear);

    valEdad(birth, currentYear);


    return 0;
}