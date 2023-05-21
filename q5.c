//length and breadth of the rectangle and radius of circle is given.
// calculate area and perimeter of the rectangle and circumference and area of circle.

#include <stdio.h>

int main(){
    //for rectangle
    int len,bre;
    printf("Enter the length: ");
    scanf("%d",&len);
    printf("Enter the breadth: ");
    scanf("%d",&bre);

    //calculation for rectangle .
    int area,peri;
    area= len*bre;
    peri= 2*(len+bre);

    //for circle
    float rad;
    printf("Enter the radius of the circle: ");
    scanf("%f",&rad);

    //calculation starts
    float areac,circum;
    areac= 3.14* rad*rad;
    circum= 2* 3.14*rad;

    printf("Area of the rectangle is %d \n",area);
    printf("perimeter of the rectangle is  %d \n",peri);
    printf("Area of the circle is %f \n",areac);
    printf("circumference of the circle is %f \n",circum);

    return 0;
}