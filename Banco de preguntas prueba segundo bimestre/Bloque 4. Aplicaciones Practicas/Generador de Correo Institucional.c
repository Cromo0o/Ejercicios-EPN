/*

Función que reciba el nombre y el año de 
ingreso, y genere la cadena: nombre2024@universidad.edu. 

*/
#include <stdio.h>
#include <windows.h>

void getInstitutionalMail(char studentName[], int ingreso){

    int stringLen = strlen(studentName);

    for (int i = 0; i < stringLen; i++){
        
        if(studentName[i] == '\n'){
            studentName[i] = '\0';
        }
        
        if (studentName[i] == ' '){
            studentName[i] = '.';
        }
    }
    
    printf("Su correo institucional es: %s%d@epn.edu.ec", studentName, ingreso);
    
}


int main(){

    SetConsoleOutputCP(65001);

    char name[50];
    int year;

    printf("## Generador de correo institucional ##\n");

    printf("Digite su nombre:\n>>");
    fgets(name, sizeof(name), stdin);

    printf("Su anio de ingreso:\n>>");
    scanf("%d", &year);

    getInstitutionalMail(name, year);

}
