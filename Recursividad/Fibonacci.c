//Implementar un subprograma recursivo que realice la serie Fibonacci

//0 1 1 2 3 5 8 13 21

//Caso base -> Si num = 1 o num = 2, entonces retorno = 1;


int sacarFibonacci(int n){
    int retorno;
    if(n == 1 || n == 2){
        retorno = 1;
    } else{
        //Esto solo retorna el valor del elemento n en la serie
        retorno = sacarFibonacci(n - 1) + sacarFibonacci(n + 1);
    }
}


#include <stdio.h>

int main(){
    int n;

    printf("Cuantos elementos quiere que tenga su serie:\n>>");
    scanf("%d", &n);

    printf("La serie fibonacci es: 0 ");

    for (int i = 1; i < n - 1; i++){
        printf(sacarFibonacci(i)," ");
    }

    return 0;
}
