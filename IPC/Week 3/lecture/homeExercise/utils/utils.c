#include <stdio.h>
#include "../heads/utils.h"

double getNum() {
    printf("enter a decimal value:");
    double num;
    scanf("%lf", &num);
    return num;
}