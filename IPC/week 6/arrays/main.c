// arrays
#include <stdio.h>
 // for later reference to any value
#define something 5

void main() {
    // arrays should be in a certain type (for now!)
    // double marks[5];
    double marks[something] = {34,64,8,35,25};

    // all zero
    double marks1[something] = {0};

    // not all 99
    double marks2[something] = {99};

    // all others would be udefined but showed as 0
    for (size_t i = 0; i < something; i++)
    {
        printf("%.2lf " , marks2[i]);
    }

    // undefined
    printf("\n%.2lf " , marks[-1]);







}