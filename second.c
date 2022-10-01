/*a program to find out distance between the cities 
in different units, second question */
#include <stdio.h>

int main(){
    int dist, met, cm;
    float feet, inch;
    printf("Enter the Distance between the cities in KM:");
    scanf("%d", &dist);

    /*calculation starts*/
    met = dist*1000;
    cm = met*100;
    feet = dist*3280.84;
    inch = dist*39370.1;

    /*print statement*/
    printf("Distance in meters is %d meters \n", met);
    printf("Distance in centimeters is %d centimeters \n", cm);
    printf("Distance in feets is %f feets \n", feet);
    printf("Distance in inches is %f inches", inch);
    return 0;
    
}