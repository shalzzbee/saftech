// basic salary is given by user da=40%, hra=20% calculate gross salary.
#include <stdio.h>

int main(){
    int  bs;
    float da,hra,gs;
    printf("Enter the basic salary: \n");
    scanf("%d", &bs);     //taking input

    //calculation starts.

    da = 0.4*bs;
    hra = 0.2*bs;

    gs= da+hra+bs;
    //printing salary 
    printf("The final salary is: %f", gs);

    return 0;
}