/*area and perimeter of rectangle and circle
fifth question*/
#include <stdio.h>

int main(){
    int area, peri, len, brd, rad;
    float areac, circum;
    /*input value of length, breath and radius*/
    printf("Enter the length of rectangle: ");
    scanf("%d", &len);
    printf("Enter the breath of rectangle: ");
    scanf("%d", &brd);
    printf("Enter the radius of the circle: ");
    scanf("%d", &rad);

    /*calculation for rectangle and circle*/
    area = len*brd;
    peri = (len+brd)*2;
    areac = 3.14*rad*rad;
    circum = 2*3.14*rad;

    printf("Area of rectangle is %d sq.meter \n", area);
    printf("Perimeter of rectangle is %d meter \n", peri);
    printf("Area of circle is %f sq. meter \n", areac);
    printf("Circumference of circle is %f meter \n", circum);
    return 0;
}