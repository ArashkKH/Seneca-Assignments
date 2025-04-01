#include <stdio.h>
#include <string.h>
#include <ctype.h>


struct student{
    char name[41];
    int age;
    int mark;
    char phoneNumber;
}

void clearBuffer(){
    while(getchar() != '\n');
}

void load(struct student* st){
    
}

int getInt(){

    int data;
    char end;

    do{
        printf("enter number");
        int ret = scanf("%d%c" , &data , &end);

        if (ret !=2 || end != '\n'){
            // we need to clear the buffer
            clearBuffer();
            printf("Invalid Integer, Enter Again\n");
        }
    }while(ret != 2 || end != '\n')
}

int main(){

    char name[]="David Lucas";
    int lent = strlen(name);
    char final1[31], final2[31];
    printf("Length is: %d\n", len);


    // string copy
    strncpy(final1,name);
    puts(final1);


    strncpy(final2,name,3);
    final2[3] = '\0';
    puts(final2);


    //appending strings

    // you need to specify the target stribg size so you can append other strings to them
    char fname[31] = "peter";
    char secname[] = " Cribbs";

    strcat(fname, secname);
    puts(fname);



    //checks if two string are equal or not, 0 on match and 1 or -1 on dismatch
    int res = strcmp(fname,secname);
    // if the cahr in difference has a lower place in ascii table it gets a -1, otherwise its gets a 1


    char start[30] = "Seneca ",end[30];
    strcat(start," College");
    //wondering if you can just use a string value???

    int seneLen = strlen(first);
    strncpy(start,end);

    char last4[5] = strncpy(last4 , start + senelen - 4);
    //&name[strlen(name) - 4] would fork for source
    // by moving the pointer to the last 4 digits you can print the rest of the string...




    // challenge number 2 
    //ctype library is forbchecking character if they are int or ch or anything...

    


    printf("Received: %d\n", getInt())







    return 0;
}
