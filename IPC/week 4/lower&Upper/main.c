#include <stdio.h>


void main() {
    char letter;

    printf("Enter any Case of letter a or b:");

    scanf("%c", & letter);
    int result = (letter < 97)? letter + 32 : letter - 32;

    printf("\n%c", result);


    // switch (letter) {
    //     case 'a':
    //     case 'A':
    //         printf("A");
    //         break;

    //     case 'b':
    //     case 'B':
    //         /* code */
    //         printf("B");
    //         break;

    //     default:
    //         printf("invalid input!");
    //         break;
    // }
}