#include <stdio.h>
double add(double val1, double val2) {
    return val1 + val2;
}

void getTheResult(double result){
    printf("helloooo: %.2lf", result);
}


int main() {

    double result = add(3.4,5.4);
    getTheResult(result);

    return 0;
}

