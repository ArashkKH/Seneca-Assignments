#include <stdio.h>
#include "functions.h"

void loadArray(int idArr[] , int qtyArr[] , float priceArr[] , int arraySize){
       for (int i = 0; i < arraySize; i++) {
           printf("\nEnter product number %d ID:", i + 1);
           while (scanf("%d", &idArr[i]) != 1) {
               printf("Invalid input. Please enter an integer: ");
               while (getchar() != '\n'); // clear the buffer
           }
           printf("\nEnter product number %d Qty:", i + 1);
           while (scanf("%d", &qtyArr[i]) != 1) {
               printf("Invalid input. Please enter an integer: ");
               while (getchar() != '\n'); // clear the buffer
           }
           printf("\nEnter product number %d Price:", i + 1);
           while (scanf("%f", &priceArr[i]) != 1) {
               printf("Invalid input. Please enter a float: ");
               while (getchar() != '\n'); // clear the buffer
           }
           putchar('\n');
       }
}

int getMaxPro(float arr[] , int arraySize){
    int maxIndex , max = -1;


    for (int i = 0; i < arraySize; i++)
    {
        arr[i] >= max ? (max = arr[i], maxIndex = i) : (void)0;
    }

    return(maxIndex);
}


int getMinPro(float arr [] , int arraySize){
    int minIndex , min = arr[0];


    for (int i = 0; i < arraySize; i++)
    {
        arr[i] <= min ? (min = arr[i], minIndex = i) : (void)0;
    }

    return(minIndex);
}

float getInvValue(int qtyArr[], float priceArr[] , int arraySize){
    int sum = 0;

    for (int i = 0; i < arraySize; i++){
       sum += qtyArr[i] * priceArr[i];
    }

    return sum;
}

// because every array can store a large amount of data you should pass a POINTER to the array's memorylocation using *
// chnages in the function would lleave it on the original data, since we're pointing to the original value