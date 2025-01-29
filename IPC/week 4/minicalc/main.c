// Conditions
#include <stdio.h>

#include "headers.h"


void main() {

    double num1;
    double num2;


    printf("Enter First Numbers:");
    scanf("%lf", & num1);

    printf("\nEnter Second Numbers:");
    scanf("%lf", & num2);

    int choice = getCalcOp();

    // if(choice == 1){
    //     printf("sum of your numbers would be:%.2lf", num1 + num2);
    // }else if(choice == 2){
    //     printf("deuction of your numbers would be:%.2lf", num1 - num2);

    // }else if(choice == 3){
    //     printf("Miuiltiply of your numbers would be:%.2lf", num1 * num2);

    // }else if(choice == 4){

    //     if (num2 == 0)
    //     {
    //     printf("Diviaion of your numbers would be:INFINITE");
    //         /* code */
    //     }else{
    //     printf("Diviaion of your numbers would be:%.2lf", num1 / num2);

    //     }


    // }else{
    //     printf("Input value is not Accepted\nProgram will be terminated!\nBye :)");
    // }


    switch (choice) {
        case 1:
            printf("sum of your numbers would be:%.2lf", num1 + num2);
            break;

        case 2:
            printf("deuction of your numbers would be:%.2lf", num1 - num2);
            break;

        case 3:
            printf("Miuiltiply of your numbers would be:%.2lf", num1 * num2);
            break;

        case 4:
            if (num2 == 0) {
                printf("Diviaion of your numbers would be:INFINITE");
                /* code */
            } else {
                printf("Diviaion of your numbers would be:%.2lf", num1 / num2);

            }
            break;
        default:
            printf("Input value is not Accepted\nProgram will be terminated!\nBye :)");
            break;
    }


}