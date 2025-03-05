#include <stdio.h>


struct Product{
    int id;
    double price;
    int quantity;
    char prodName[21];
};



void main(){

    struct Product shir = {1,12.45,20,"Milk"};
    printf("id: %d\n" , shir.id);
    printf("price: %.2f\n" , shir.price);
    printf("quantity: %d\n" , shir.quantity);
    printf("prodName: %s\n" , shir.prodName);

}
