/*
* This week, we will write a program that builds
* on the menu we made last week. This menu will keep looping
* using one of the loops we learned this week, and will
* keep adding the cost of sushi to a user's total until
* they decide they are done ordering.
*/

#include <stdio.h>

int main(){
    printf("Today's menu:\n");
    printf("Option 1: Dynamite Roll\n");
    printf("Option 2: Crazy Salmon Roll\n");
    printf("Option 3: Sashimi (Assorted)\n");
    printf("Option 4: Tempura Shrimp Roll\n");
    printf("Option 5: Mamenori\n");
    printf("Option 0: Exit and Complete Order\n");

    int order;
    float price = 0.0;

    do{
        printf("Select an option that you want to add to your order.\n");
        scanf("%d", &order);
        switch(order){
            case 0:
                printf("Thanks for coming!\n");
                break;
            case 1:
                price += 20.22;
                break;
            case 2:
                price += 15.00;
                break;
            case 3:
                price += 50.99; 
                break;
            case 4:
                price += 10.50;
                break;
            case 5:
                price += 22.35;
                break;
            default:
                printf("Invalid order! No price listed. ");
        }
    }while(order != 0);

    printf("Calculated price: %.2f\n", price);

    return 0;
}