//Time to reach between two vehicles
#include <stdio.h>

int main(void){

    float s1, s2, d, R_time;  //speed1, speed2, distance, reach time

    printf("* Calculate the time it takes for two cars to reach each other *\n");

    printf("Enter the distance between the two vehicles in kilometers: ");
    scanf("%f",&d);
    
    printf("Enter the speed of the first car in km/h.: ");
    scanf("%f",&s1);
    
    printf("Enter the speed of the second car in km/h.: ");
    scanf("%f",&s2);

    if( s1 > s2 ){

        R_time = ( d / ( s1 - s2 )) * 60; //Formula for time of flight in uniform rectilinear motion
        printf("The first car will catch up with the second in %.2f minutes.", R_time);

    }
    else if( s1 < s2 ){

        R_time = ( d / ( s2 - s1 )) * 60;
        printf("The second car will catch up with the first in %.2f minutes.", R_time);

    }
    else{

        printf("Both have the same speed, no one will catch up with anyone else.");

    }

    return 0;

}