// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

// V1
void converting(void) {
    char intString[BUFFER_SIZE]; // Buffer for storing user input
    int intNumber; // Variable to store the result after conversion

    // Input loop: Continues to prompt the user for input until 'q' is entered
    do {
        printf("Type an int numeric string (q - to quit):\n");
        fgets(intString, BUFFER_SIZE, stdin); // Get input from the user
        intString[strlen(intString) - 1] = '\0'; // Remove newline character from the end of the input

        // Process input if it is not 'q'
        if (strcmp(intString, "q") != 0) {
            intNumber = atoi(intString); // Convert string to integer
            printf("Converted number is %d\n", intNumber); // Display the result
        }

    } while (strcmp(intString, "q") != 0); // Continue until user types 'q'

    // End message
    printf("*** End of Converting Strings to int Demo ***\n");
}