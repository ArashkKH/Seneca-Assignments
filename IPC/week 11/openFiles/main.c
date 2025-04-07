#include <stdio.h>


int main(){
    FILE *testFile = NULL;

    testFile = fopen("../test.txt" , "w");

    if (testFile != NULL){
        printf("that did work");
    }else{
        printf("that didnt work");
    }
}
