#include <stdio.h>

/*
* This example explores our very first array AND iterating over it!
* A for loop will iterate over everything in an "iterable" (collection).
* And an array is exactly that!
*/

int main(){
    int len = 7;

    // Here is a simple array of characters!
    char example[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'}; 

    // Here we iterate over the array and print out its contents.
    for(int i = 0; i < len; i++){
        printf("%c", example[i]);
    }

    return 0;
}