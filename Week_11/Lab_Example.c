#include "Lab_Example.h"

void addNext(struct Node** start, int nextData){
    if(!(*start)->next){
        struct Node* nextNode = (struct Node*)malloc(4 + sizeof(struct Node*));
        nextNode->data = nextData;
        nextNode->next = NULL;
        (*start)->next = nextNode;
    }
    else{
        addNext(&(*start)->next, nextData);
    }
}

//struct Node* searchForNode(int searchData){}

void deleteLinkedList(struct Node* ls){
    
}


int main(){
    //printf("%d\n", sizeof(int));
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    first->data = 9;
    first->next = NULL;

    addNext(&first, 10);
    printf("%d\n", first->next->data);
    addNext(&first, 11);
    printf("%d\n", first->next->next->data);

    return 0;
}