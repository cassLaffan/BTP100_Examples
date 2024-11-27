/*
* We will take last week's node example, and read the contents
* from ints.txt into a linked list data structure.
*/

#ifndef LAB_EX
#define LAB_EX

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next; // Entirely possible
};

void addNext(struct Node** start, int nextData);

struct Node* searchForNode(struct Node* aNode, int searchData);

void printLinkedList(struct Node* aNode);

void deleteLinkedList(struct Node* ls);

void scanFromFile(char* fileName, struct Node** aNode);

#endif