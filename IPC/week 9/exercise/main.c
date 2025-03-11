#include <stdio.h>

void addMins(double *v1, double *v2 , double *sum, double *ded) {
    *sum = *v1 + *v2;
    *ded = *v1 - *v2;
}

void main() {

    double v1 = 1.8, v2 = 6.9;

    double sum, ded;

    addMins(&v1 , &v2 , &sum , &ded);

    printf("sum: %.2lf\nded: %.2lf", sum , ded);
}