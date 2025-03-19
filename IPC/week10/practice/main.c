#include <stdio.h>
#include "functions.h"

void flowerTest1(){
    struct Flower flower1;
    populateFlower(&flower1);
    displayFlower(&flower1);
}



// void updateMarks(double mk[]){
void updateMarks(double* mk){
    // mk[0] = 31;
    // mk[1] = 51;
    // mk[2] = 71;
    
    *mk = 31;
    *(mk + 1) = 51;
    *(mk + 2) = 71;

}

void displayAll(double mk[] , int sz){
    int i;
    for (i = 0; i < sz; i++)
    {
        printf("%.2f\n" , mk[i]);
    }
    
}

// void tester3(){
//     struct Flowers manyFlowers[];
//     populateAllFlower(manyFlowers , 4);
//     displayAllFlower(manyFlowers , 4);
// }

void main(){   

    // extra (Arrays and pointers)
    // double marks[3];
    // updateMarks(marks);
    // updateMarks(&marks[0]);
    // displayAll(marks,3);

    flowerTest1();


}
