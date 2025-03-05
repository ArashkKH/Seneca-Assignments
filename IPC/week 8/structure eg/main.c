#include <stdio.h>


struct Car{
    int numPlate;
    char brand[21];
    int model;
    float price;
};



void main(){

    // struct Car myCar;

    // printf("\n\nplease enter your plate number: ");
    // scanf("%d" , &myCar.numPlate);

    // printf("\nplease enter brand name: ");
    // scanf("%s" , myCar.brand);

    // printf("\nplease enter model year: ");
    // scanf("%d" , &myCar.model);

    // printf("\nplease enter car Price: ");
    // scanf("%f" , &myCar.price);


    // printf("\n\n car summary:\n\n");

    // printf("%-20s %-20s %-20s %-20s\n" , "PLATE NUM" , "BRAND" , "MODEL YEAR" , "PRICE");
    // printf("---------------------------------\n");
    // printf("%-20d %-20s %-20d %-20f\n" , myCar.numPlate , myCar.brand , myCar.model , myCar.price);
    



    struct Car myCar;

    printf("\n\nplease enter your plate number: ");
    scanf("%d" , &myCar.numPlate);

    printf("\nplease enter brand name: ");
    scanf("%s" , myCar.brand);

    printf("\nplease enter model year: ");
    scanf("%d" , &myCar.model);

    printf("\nplease enter car Price: ");
    scanf("%f" , &myCar.price);


    printf("\n\n car summary:\n\n");

    printf("%-20s %-20s %-20s %-20s\n" , "PLATE NUM" , "BRAND" , "MODEL YEAR" , "PRICE");
    printf("---------------------------------------------------------,\n");
    printf("%-20d %-20s %-20d %-20f\n" , myCar.numPlate , myCar.brand , myCar.model , myCar.price);


}
