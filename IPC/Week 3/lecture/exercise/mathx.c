

#include <stdio.h>
    
float getNum(){
    float num;
    printf("\n enter a number: ");
    scanf("%f", &num);
    printf("\n");

    return num;
}

void display(float passedNum){
    printf("Result is : %.2f", passedNum);
}

float multiply(){
    display(getNum() * getNum());
    return 0;
}


float divide(){
    display(getNum() / getNum());
    return 0;
}
