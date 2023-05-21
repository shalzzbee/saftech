//Temperature in farenheit degree is input convert into centigrade.

#include <stdio.h>

int main(){
    float faren, cel;
    printf("Enter the temperature in farenheit: ");
    scanf("%f", &faren);

    // calculation starts
    cel = (faren-32)*5/9;

    printf("temperature in degree celcius: %f", cel);
    return 0;
}