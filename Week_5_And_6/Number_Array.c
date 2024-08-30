#include <stdio.h>

/*
* Character arrays aren't the only arrays we can make!
* Below is an example of an integer array
*/

int main(){

    // Here we have an explicit declaration of an array and its length.
    int exampleNums[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Another for loop! Remember, these iterate over collections.
    for(int i = 0; i < 9; i++){
        printf("This is the value at index %d: %d\n", i, exampleNums[i]);
    }

    return 0;
}