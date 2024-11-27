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

void scanFromFile(char* fileName, struct Node** aNode){
    FILE* ourfile = fopen(fileName, "r");

    if(!ourfile){
        printf("File failed to open. Aborting!\n");
    }
    else{
        int temp;
        do{
            fscanf(ourfile, "%d", &temp);
            addNext(aNode, temp);
        }while(!feof(ourfile));
        
        fclose(ourfile);
    }
}

int main(){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    scanFromFile("./ints.txt", &newNode);

    if(newNode){
        printLinkedList(newNode);
    }

    deleteLinkedList(newNode);
    

    return 0;
}