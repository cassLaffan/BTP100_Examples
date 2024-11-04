#include <stdio.h>

/*
* Let's take a look at pointers and addresses.
* Remember, * indicates that it's a pointer and &
* is an operation which gives you a variable's address.
*/

void conditionA(int* i){
    printf("%d is a good number.\n", *i);
}

void conditionB(int* i){
    printf("%d is not between 1 and 3!\n", *i);
}

int main(){
    int i;

    printf("Please input a number between 1 and 3.\n");
    scanf("%d", &i);

    switch(i){
        case 1:
        case 2:
        case 3:
            conditionA(&i);
            break;
        default:
            conditionB(&i);
    }

    return 0;
}