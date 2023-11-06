// basic salary is given by user da=40%, hra=20% calculate gross salary.
#include <stdio.h>

int main(){
    int  bs;
    int da,hra,gs;
    printf("Enter the basic salary: \n");
    scanf("%d", &bs);     //taking input

    //calculation starts.

    da = 4/10*bs;
    hra = 2/10*bs;

    gs= da+hra+bs;
    //printing salary 
    printf("The final salary is: %d", gs);

    return 0;
}
