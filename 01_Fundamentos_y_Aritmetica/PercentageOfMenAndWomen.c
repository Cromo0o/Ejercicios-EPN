//Determine the percentage of men and women in a given group
#include <stdio.h>

float getPercentWoman(float w, float t){

    return ( ( w / t ) * 100 );

}

float getPercentMen(float m, float t){

    return ( ( m / t ) * 100 );

}

int main(void){

    float w, m, t; // w = number of woman       m = number of men       t = total number of men and woman

    printf("* Program to determine the percentage of men and women in a group *\n");

    printf("Enter the amount of women: \n");
    scanf("%f",&w);

    printf("Enter the amount of men: \n");
    scanf("%f",&m);

    t = m + w;
    
    if( t <= 0){

        printf("The sum of the group of men and women must be a positive number greater than zero.\n");
    
    }
    else{

        printf("In a group of %.0f people, there are %.2f%% of men\n", t, getPercentMen(m, t));
        printf("In a group of %.0f people, there are %.2f%% of woman\n", t, getPercentWoman(w, t));

    }

    return 0;

}