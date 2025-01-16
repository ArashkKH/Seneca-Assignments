#include <stdio.h>


void main(){

    double celsiusDegree;

    printf("\n\n------------------------------------------------------\n\n");
    printf("Please enter the temperature in Celsius --->");
    scanf("%lf" , &celsiusDegree);


    printf("\n\n\n\n");
    printf("%0.2lf degrees Celsius is %0.2lf degrees Fahrenheit" , celsiusDegree , (celsiusDegree * 9/5) + 32);
    printf("\n\n------------------------------------------------------\n\n");
}