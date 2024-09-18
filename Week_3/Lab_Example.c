/*
* In this lab, we will take a user's order for sushi
* from a menu! Using their selection, we will use a 
* if statements first, then we will use a switch statement
* to print off the price of their order.
*/

#include <stdio.h>

int main(){
    printf("Today's menu:\n");
    printf("Option 1: Dynamite Roll\n");
    printf("Option 2: Crazy Salmon Roll\n");
    printf("Option 3: Sashimi (Assorted)\n");
    printf("Option 4: Tempura Shrimp Roll\n");
    printf("Option 5: Mamenori\n");

    printf("What option would you like? ");
    int order;
    scanf("%d", &order);
    float price = 0.0;

    switch(order){
        case 1:
            price = 20.22;
            break;
        case 2:
            price = 15.00;
            break;
        case 3:
            price = 50.99; 
            break;
        case 4:
            price = 10.50;
            break;
        case 5:
            price = 22.35;
            break;
        default:
            printf("Invalid order! No price listed. ");
    }

    printf("Calculated price: %.2f\n", price);

    return 0;
}