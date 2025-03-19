#include <stdio.h>
#include "functions.h"


//======================== Utils =======================/

void clearBuffer(){
    while (getchar() != '\n');
    
}

//======================== Utils =======================/


/* -------------------------------------------------------------------------- */
/*                                   Flowers                                  */
/* -------------------------------------------------------------------------- */

//======================== flowers Basic =======================/

void populateFlower(struct Flower* flower){

    printf("Enter a name for your Flower:");
    clearBuffer();
    scanf("%20[^\n]" , flower->name);z
    
    printf("\nEnter a price for your Flower:");
    scanf("%f", &(*flower).price);
    clearBuffer();
    
    printf("\nEnter a Color for your Flower:");
    scanf("%10[^\n]" , flower->color);
    clearBuffer();
    
    printf("\nEnter an ID for your Flower:");
    scanf("%d", &(*flower).id);
    clearBuffer();
}

void displayFlower(struct Flower* flower){
    printf("\n\nFlower Id: %d , Name: %s , Price:$%.2f , Color:%s" , flower->id, flower->name ,flower->price , flower->color );

}

void modifyPrice(struct Flower* flower){
    printf("\n\nEnter new price for flower#%d :" , flower->id);

    scanf("%f" , &(*flower).price);

    printf("\n$$ Price Updated! $$");
}

//======================== flowers Basic =======================/


//======================== Multiple Flowers =======================/


void populateAllFlower(struct Flower flowers[], int sz) {
        for (size_t i = 0; i < sz; i++) {
            printf("FLOWER - %d\n\n");
            populateFlower(&(flowers[i]));
        }
}


void displayAllFlower(struct Flower flowers[], int sz) {
    for (size_t i = 0; i < sz; i++) {
        displayFlower(&(flowers[i]));
    }
}

//======================== Multiple Flowers =======================/



/* -------------------------------------------------------------------------- */
/*                                    Marks                                   */
/* -------------------------------------------------------------------------- */


