#include <stdio.h>

void main(){

    // char name[21] = {'B','O','B','\0'}; // character array
    // //  \0 is a null terminator which says all the other chars after this would be garbage

    // printf("%s" , name);
    // // %s only shows valid characters

    // char name2[51] = "Hello everybody my name is bob";

    char name3[31];
    // getting some data from user and putting it in char array
    printf("Enter a name: ");
    // scanf("%s" , name3); //%s has issue with spaces,  it ignores anything after that
    // scanf("%30s" , name3); //%30s this would dictate the pc to take the first 30 chars only
    // printf("You entered %s\n" , name);
    
    scanf("%30[^\n]%*c" , name3); // get 30 characters untill you reach a new line
    printf("You entered %s\n" , name3);
// you dont need the & sign since you re not using a loop to fil the array
}