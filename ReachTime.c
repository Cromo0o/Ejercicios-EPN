//Time to reach between two vehicles
#include <stdio.h>

int main(void){

    float s1, s2, d, R_time;  //speed1, speed2, distance, reach time

    printf("Digite la distancia que hay entre ambos vehiculos en km: ");
    scanf("%f",&d);
    
    printf("Digite la velocidad en km/h del vehiculo que salio primero: ");
    scanf("%f",&s1);
    
    printf("Digite la velocidad en km/h del vehiculo que salio despues: ");
    scanf("%f",&s2);

    
    
    if( s1 > s2 ){

        printf("El vehiculo que salio segundo no alcanzara al que salio primero");

    }
    else if( s1 < s2 ){

        R_time = ( d / ( s2 - s1 )) * 60;       //Formula de tiempo de alcance en un MRU, además de transformar de horas a minutos
        printf("El segundo vehiculo en salir alcazara al primero en %.2f minutos", R_time);

    }
    else{

        printf("Ambos vehiculos tienen la misma velocidad.");

    }

    return 0;

}