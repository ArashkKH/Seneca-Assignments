#include <stdio.h>
#include "headers.h"

int getCalcOp(){
    int opNum;
    printf("\n\nChoose an operation to be done on the numbers you entered\n\n1.Add\n2.Deduct\n3.Multiply\n4.Divide\n\nEnter choice Number:");
    scanf("%d",&opNum);

    return(opNum);
}