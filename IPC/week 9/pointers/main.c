#include <stdio.h>

void main(){

    int x = 10;

    int* y = &x;

    printf("\nAddress of X: %p" , &x);
    printf("\nValue of X: %d" , x);

    printf("\nAddress of y: %p" , &y);
    printf("\nValue of y: %p" , y);
    
    printf("\nValue of x using y: %d" , *y);

    // changing value of x using y

    *y += 3;

    printf("\nValue of x: %d" , x);

    
}