/*
* We have covered a lot this week. This week's example
* will build all this together. We will create a program
* which builds on the previous week's example.
*
* Our program will declare a macro named MAX_SUSHI and set 
* it to a size of 10. Then, we will create an int array of that size
* which will store our user's orders. Once the user has exited the menu
* OR the order array is full, we will print the order list
* back to the user.
*/

#include <stdio.h>

#define MAX_SUSHI 10

int main(){
    // Creating an array of size MAX_SUSHI and populating it with 0s
    int orders[MAX_SUSHI] = {0};
    // Line 22 is a 2 dimensional character array
    // but what it really is, is an array of strings
    char menu[5][30] = {"Dynamite Roll: $20.22\0", "Crazy Salmon Roll: $15.00\0",
                    "Sashimi (Assorted): $50.99\0", "Tempura Shrimp Roll: $10.50\0",
                    "Mamenori: $22.35\0"};
    // Declaring a counter that allows us to track
    // where we are in the orders array.
    int currentOrder = 0;
    // A variable for user input
    int userInput = -1;
    // Variable for price tracking, useful further down.
    float price = 0.0;
    
    // Will loop while the user doesn't exit AND
    // the order array isn't full
    while(userInput != 0 && currentOrder < MAX_SUSHI){
        printf("Today's menu:\n");
        // This is an example of a nested loop
        for(int i = 0; i < 5; i++){
            // Uses the %s string type specifier to print strings
            // from the menu array, one at a time
            printf("Option %d: %s\n", i + 1, menu[i]);
        }
        printf("Option 0: Exit and Complete Order\n");
        printf("-------------------------------------\n");
        printf("What would you like to add to your order? ");

        scanf("%d", &userInput);

        // We don't want to add an order if the user wants to exit!
        if(userInput != 0){
            orders[currentOrder] = userInput;
            // Saves our new place in the orders array and ensures
            // we know if it's full.
            currentOrder++;
        }

        printf("\n");
    }

    printf("Your order and total price:\n");
    
    // For loops' middle element is just like that of a while loop!
    // It's a condition that has to be in order for the loop to continue
    // However, generally for for loops, it's a bounding condition
    // (like an upper limit).
    for(int i = 0; i < MAX_SUSHI && i < currentOrder; i++){
        switch(orders[i]){
            // Using the %s string type specifier again
            case 1:
                printf("%s\n", menu[0]);
                price += 20.22;
                break;
            case 2:
                printf("%s\n", menu[1]);
                price += 15.00;
                break;
            case 3:
                printf("%s\n", menu[2]);
                price += 50.99; 
                break;
            case 4:
                printf("%s\n", menu[3]);
                price += 10.50;
                break;
            case 5:
                printf("%s\n", menu[4]);
                price += 22.35;
                break;
            default:
                printf("Invalid order! No price listed. \n");
        }
    }
    printf("The total price for your order is: $%.2f\n", price);
    printf("Thanks for coming!\n");

    return 0;
}