#include <stdio.h>
#include "functions.h"

#define arrSize 3


void main() {
    printf("hi");
    int proIdArr[arrSize];
    int quantityArr[arrSize];
    float priceArr[arrSize];
    
    // for making a table in output
    // - for left align
    // + for Right align
    // 0 for Center align
    printf("%10s%12s%20s" , "first col" ,"second col", "third col");

    loadArray(proIdArr , quantityArr , priceArr , arrSize);

    printf("\nThe value of your whole inventory is: %.2f" , getInvValue(quantityArr , priceArr ,arrSize));

    putchar('\n');
    int maxID = getMaxPro(priceArr , arrSize);
    int minID = getMinPro(priceArr , arrSize);
    printf("\nThe MAX Price ID: %d\nWhich is $%.2f" , proIdArr[maxID] , priceArr[maxID]);
    printf("\nThe MIN Price ID: %d\nWhich is $%.2f" , proIdArr[minID] , priceArr[minID]);

}