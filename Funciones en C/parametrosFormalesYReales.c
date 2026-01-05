//sintaxis
/*

returnType functionName(parameter1, parameter2, parameter3){
    //code to be executed
}

*/
#include <stdio.h>

void myFunction(char name[]){
    printf("Hello %s\n", name);
}

//Funcion con multiples parametros
void myOtherFunction(char name[], int age) {
    printf("Hello %s. You are %d years old.\n", name, age);
}

int main(void) {

    myFunction("Lider");
    myFunction("Liderpj");
    myFunction("Jair");
    myFunction("Cristopher");

    myOtherFunction("Matthew", 19);
    myOtherFunction("Aby", 19);
    myOtherFunction("Mela", 19);
    myOtherFunction("Kaya", 19);

    return 0;
}