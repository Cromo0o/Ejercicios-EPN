//Funciones llamando otras funciones

#include <stdio.h>

//Declaro dos funciones

void myFunction();
void myOtherFunction();

int main(void){

    myFunction(); //Llamo myFunction (desde main)

    return 0;
}

//Defino myFunction
void myFunction(){
    printf("Algo de texto en myFunction\n");
    myOtherFunction(); //Llamo myOtherFunction (desde myFunction)
}

//Defino myOtherFunction

void myOtherFunction(){
    printf("Hey, algo mas de texto en myOtherFunction");
}
