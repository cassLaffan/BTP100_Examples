#include <stdio.h>

/*
* Character arrays are special in that we can give them
* special syntax which is a little more human-readable.
*/

/*
* Always remember that you need the null character, \0,
* at the end of your character array!
*/

int main(){

    // Here is the other way to format a c-string (character array):
    char exampleOne[] = "Hello World!\0";
    // %s is the string identifier (strings are just another name for character arrays)
    printf("Our first C string is: %s\n", exampleOne);
    
    //Now, let's pick out a specific character.
    char ch = exampleOne[3];
    printf("The fourth character in exampleOne is: %c\n", ch);

    return 0;
}