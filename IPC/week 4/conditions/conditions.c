// Conditions
#include <stdio.h>

void main(){

    printf("Entaer a Passenger Age:");

    int age;
    char person[20];
    float fee;

    scanf("%d" , &age);

    if (age < 18){
        // teens
        printf("\nYou are a teenager:Fare is $10");
    }else if(age < 50){
        // adults
        printf("\nYou are an Adult:Fare is $20");
    }else{
        // seniors
        printf("\nYou are a senior:Fare is $17");
    }
}



