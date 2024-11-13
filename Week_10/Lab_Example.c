/*
* We will be creating a header file, where we declare
* a sushi struct with a type of fish character pointer,
* and an integer ID.
*
* There will be one function, which returns void, called
* makeSushi() and it will take a single double pointer argument.
* It will then create a sushi object at that pointer.
*/

#include "./Lab_Example.h"

void makeSushi(struct Sushi** aSushi){
    if(!*aSushi){
        *aSushi = (struct Sushi*)malloc(sizeof(struct Sushi));
    }
    int sushiID;
    char type[10];
    printf("What is the sushi ID? ");
    scanf("%d", &sushiID);
    int garbage = getchar();
    printf("What is the type of fish? ");
    scanf("%[^\n]", type);
    garbage = getchar(); // Making sure we don't get warnings

    (*aSushi)->sushiID = sushiID;
    strcpy((*aSushi)->fishType, type);
}

int main(){
    struct Sushi* aNewSushi = NULL;
    struct Sushi** newSushiPointer = &aNewSushi;

    makeSushi(newSushiPointer);

    printf("Our sushi ID is %d\n", aNewSushi->sushiID);
    printf("Our sushi is %s\n", aNewSushi->fishType);

    free(aNewSushi);
    return 0;
}