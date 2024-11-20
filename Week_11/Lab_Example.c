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

struct Node* searchForNode(struct Node* aNode, int searchData){
    if(searchData == aNode->data){
        return aNode;
    }
    else if(!aNode->next){
        return NULL;
    }
    else{
        return searchForNode(aNode->next, searchData);
    }
}

void printLinkedList(struct Node* aNode){
    if(aNode->next){
        printf("%d->", aNode->data);
        printLinkedList(aNode->next);
    }
    else{
       printf("%d\n", aNode->data); 
    }
}

void deleteLinkedList(struct Node* ls){
    if(ls->next){
        deleteLinkedList(ls->next);
    }
    
    free(ls);
}

int main(){
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    first->data = 9;
    first->next = NULL;

    addNext(&first, 10);
    addNext(&first, 11);
    addNext(&first, 12);

    printLinkedList(first);

    struct Node* searchResult = searchForNode(first, 11);
    if(!searchResult){
        printf("Result not found!\n");
    }
    else{
        printf("Result was found!\n");
    }

    deleteLinkedList(first);

    return 0;
}