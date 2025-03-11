#include <stdio.h>

void showPV(double val){
    printf("value by pointer is = %.2lf" , val);

}
void showPA(double *ptr){
    printf("value by pointer is = %.2lf" , *ptr);

}

void main(){

    double value = 1.5;
    showPV(value);
    showPA(&value);
}