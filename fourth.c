/*temperature from farenheit to degree
fourt question*/
#include <stdio.h>
int main(){
    float faren, x, cel;
    /*Input the farenheit data*/
    printf("Enter the temperature in farenheit: ");
    scanf("%f", &faren);

    /*formula for conversion*/
    x = (faren-32)*5;
    cel = x/9;
    printf("Temperature is %f degree celcius", cel);

    return 0;

}