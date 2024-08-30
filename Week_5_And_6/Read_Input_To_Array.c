#include <stdio.h>

/*
* In this file, we are reading user input using scanf into
* a character array! This allows us to read more than one item
* at a time from the user into our program. This is enabled by
* our size allocation for the array on line 16.
*/

int main(){

    printf("Enter your name and your age!\n");

    // Giving us 20 bytes of contiguous memory to read into!
    // We can't surpass it however!
    char str[20];
    int num;

    scanf("%19s", str);

    scanf("%d", &num);

    printf("Your age is: %d.\n Your name is: %s.\n", num, str);

    return 0;
}