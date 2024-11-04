#include <stdio.h>

/*
* This file contains examples of all the primitive data types
* as return types in a function. It also shows the various kinds
* of arguments.
*/

int addTwoNums(int a, float b){
    int c = a + b;
    return c;
}

float divideThreeNums(float a, int b, float c){
    float d = a / (b / c);
    return d;
}

char getChar(){
    char ret = 'a';
    char dummy;

    while(ret == 'a'){
        printf("Enter a character: ");
        scanf("%c", &ret);
        scanf("%c", &dummy);
    }

    return ret;
}

void doesntReturnAnything(int a, int b){
    printf("The integer arguments are %d and %d\n", a, b);
}

// Remember, the return statement is a terminating statement.
// This means that if the condition is met, the function will
// terminate early.
int returnsEarly(int a, int b){
    if(a > b){
        return 0;
    }
    return 1;
}

int main(){

    int retA = addTwoNums(1, 5);
    printf("%d\n", retA);

    float retB = divideThreeNums(14.2, 3, 8.7);
    printf("%.2f\n", retB);

    char retC = getChar();
    printf("%c\n", retC);

    doesntReturnAnything(5, 8);

    int retD = returnsEarly(10, 2);
    printf("%d\n", retD);

    return 0;
}