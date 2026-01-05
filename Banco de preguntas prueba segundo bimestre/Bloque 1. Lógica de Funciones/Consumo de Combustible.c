/*

Crea una función que reciba los kilómetros 
recorridos por un vehículo y los litros de combustible consumidos. La función 
debe retornar cuántos kilómetros rinde el vehículo por cada litro.

*/
#include <stdio.h>

float performance(float km, float ltrs){

    //Rendimiento del vehiculo en km/l (kilometros por litro)
    float kmL;

    kmL = km / ltrs;

    return kmL;
}


int main(void){

    float km, ltrs;

    printf("Digite los kilometros recorrido por el vehiculo:\n>>");
    scanf("%f", &km);

    printf("Digite cuanto combustible se consumio:\n>>");
    scanf("%f", &ltrs);

    printf("Por cada %.2fkm recorrido/s se consume un litro de combustible", performance(km, ltrs));

    return 0;
}