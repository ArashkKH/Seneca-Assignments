//Converting Module Source
#define BUFFER_SIZE 80
#define _CRT_SECURE_NO_WARNINGS
#include "converting.h"


void converting(void) {
    /* Version 1 */

    // start Point
    printf("*** Start of Converting Strings to int Demo ***\n");

    //======================== Vars =======================/
    char instString[BUFFER_SIZE];
    int intNumber;
    //======================== Vars =======================/

    do{
        // giving instructions to user
        printf("Type an int numeric string (q - to quit):\n");
        // loading user input strigs in the buffer
        fgets(instString , BUFFER_SIZE , stdin);
        // adding null terminal to the string
        instString[strlen(instString) - 1] =  '\0';

        // seeing if user wants to quit the program or not
        if (strcmp(instString, "q") != 0){
            // if they dont quit

            // parsing the entered string to an integer
            intNumber = atoi(instString);

            // printing the result
            printf("Converted Number is %d\n" , intNumber);
        }
        // do above atleat once until the user decides to quit the program
    }while (strcmp(instString, "q") != 0);
    // end point
    printf("*** End of Converting Strings to int Demo ***\n\n");

    /* Version 2 */


    /* Version 3 */


}
