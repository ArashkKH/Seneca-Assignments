#include <stdio.h>


void main(){
    int child = 10, adult = 23, senior = 5 , employed = 13;


    if (!child)
    {
        printf("Not a child\n");
    }

    if (employed)
    {
        printf("Employed\n");
    }
    
    if (child && employed)
    {
        printf("child Employed\n");
    }
    
    if (adult || employed)
    {
        printf("adult or empliyed\n");
    }

    if (!child && !adult)
    {
        printf("not a child and not an adult\n");
    }

    if ((senior && !employed)||(!adult && employed))
    {
        printf("either you're a looser or a genius!\n");
    }



    printf("enter some character:");

    char ch;

    scanf("%c", ch);


    if((ch >= 65 && ch <= 90)||(ch >= 97|| ch <= 122)){
        printf("\nooOoOOo a letter !\n");


        if (ch == "a" || ch == "e" || ch == "i" || ch == "u" || ch == "o" ||ch == "A" || ch == "E" || ch == "I" || ch == "U" || ch == "O" )
        {
            /* code */
            printf("\nyummmma a vowel!");
        }else{

            printf("\nbruh thats not a vowel >:( ");
        }
        
    }
}