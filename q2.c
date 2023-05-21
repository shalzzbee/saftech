//distance of two cities(in k.m.) is inputed through keyboard print them in feet, meters, inches and centimeters.
# include <stdio.h>

int main(){
    float dk, dm,df, di,dc;

    printf("Enter the distance in km: \n");
    scanf("%f", &dk);                             //taking input

    //calculation starts

    dm = dk*1000;
    df = dk*3280.84;
    di = dk*39370.1;
    dc = dm*100;

    printf("the distance in km is : %f \n", dk);
    printf("the distance in meter is : %f \n", dm);
    printf("the distance in feet is : %f \n", df);
    printf("the distance in inches is : %f \n", di);
    printf("the distance in centimeter is : %f \n", dc);
    return 0;


}