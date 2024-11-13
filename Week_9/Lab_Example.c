#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
* In this lab, we will be practicing more with functions and 
* pointers. The first function will take two arguments:
* one character array and one integer; it will check to see
* if the amount of characters in the array match the integer
* and will return 1 or 0 depending on if it is true or false.

* The second basic function will take a character array as its
* only argument and return nothing. We will take user input and 
* store it in the character array.

* Then, we will write a main function and experiment with these
* functions.

* Hint:     scanf("%[^\n]",arr);getchar();
*/

int lengthMatch(char* str, int len){
    int count = 0;

    // If our string exists at all
    if(str){
        // If it doesn't, this while loop would give us an index error
        while(str[count] != '\0'){
            count++;
        }
    }
    // Will return 1 or 0 depending on the truthfulness of the answer here
    return count == len;
}

void overwriteString(char** str) {
    if (!*str) {
        printf("This string does not exist!\n");
        // Allocating new memory for str in case it's a NULL pointer
        *str = (char*)malloc(sizeof(char) * 100);
    }
    printf("Enter a new string: ");
    // Store the new string in the memory *str points to
    scanf("%[^\n]", *str);  
    // Consumes the newline character left in the buffer
    getchar(); 
}

int main() {
    // Remember, arrays are pointers
    char* name = "Cassandra\0";

    int result = lengthMatch(name, 80);

    // Creating a double pointer (pointer to pointer) to the string
    char** newName = &name;
    // Passing the address of the pointer
    overwriteString(newName);

    printf("Our new string is: %s\n", name);

    // Demonstrating with a NULL pointer
    char* newChar = NULL;
    char** newCharPointer = &newChar;

    // Passing the address of the NULL pointer
    overwriteString(newCharPointer);  
    // Prints the newly allocated string
    printf("%s\n", newChar); 


    // Remember to free memory allocated by malloc to avoid memory leaks
    free(newChar);

    return 0;
}
