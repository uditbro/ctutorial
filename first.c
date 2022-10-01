/* Program to find out salary 
first question*/
#include <stdio.h>

int main(){
    int sal, da, hra, amo; /*declaring variable types*/
    /*take basic salary as input*/
    printf("Enter the basic salary of ramesh: ");
    scanf("%d", &sal);

    /*calculation starts*/
    da = (0.4)*sal;
    hra = (0.2)*sal;

    /*final amount*/
    amo = da+hra+sal;
    printf("Gross salary of ramesh is %d", amo);
    return 0;
}