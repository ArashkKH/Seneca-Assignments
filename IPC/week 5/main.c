#include <stdio.h>


void main() {

    int studentNum;
    printf("\nenter the number of students:");
    do {
        if ((studentNum < 0 && studentNum > 5)) {
            printf("\nInvalid number of students, Try Again");
        }

        scanf("%d", & studentNum);
        /* code */
    } while (studentNum < 0 && studentNum > 5);




    printf("\n---enter each student mark---\n");
    int markSum = 0  , minMark = 100 , maxMark = 0;



    for (int i = 0; i < studentNum; i++)
    {
        int studentMark = 1;
        printf("\nenter student number %d mark (%d remaining):" , i + 1 , studentNum - i);
        do
        {
            if (!(studentMark >= 0 && studentMark <= 100)) {
                printf("invalid mark entered, Try Again!\n");
            }

            scanf("%d", &studentMark);
        } while (studentMark >= 0 && studentMark <= 100);

        studentMark > maxMark ? maxMark = studentMark : (void)0;
        studentMark < minMark ? minMark = studentMark : (void)0;
        markSum += studentMark;
    }

    printf("\nthe average mark of the %d student(s) entered is:%.2f\n\n" , studentNum , markSum / studentNum);

    printf("highest score was:%d\n" , maxMark);
    printf("lowest score was:%d\n" , minMark);


    double average = markSum / studentNum;
    int minMultCounter = 0;
    

    while (average > minMark)
    {
        average -=minMark;
        minMultCounter++;
    }

    printf("\n %.2f / %.2f Quotient: %d Remainder: %.2f" , markSum / studentNum , minMark , );
    


    printf("");
    getchar(); // To consume the newline character left by scanf
    getchar(); // To wait for the user to press a key

}