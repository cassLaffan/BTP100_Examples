/*
 * This week, we will be working more with header files. 
 * We will create a Node struct, which will take the form
 * of this:
 * 
 * Node -> Next Node
 * 
 * That next node can point, furthermore, to another
 * node and so on. We will then write some functions for this
 * "data structure", such as a search function and an insert!
 * 
 * Finally, we will write a function that reads the integers from
 * ints.txt and creates a node -> node -> node data structure
 * with the numbers from it.
 * 
 * camille.davis@senecapolytechnic.ca
 * 
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

struct Node* searchForNode(int searchData);

void deleteLinkedList(struct Node* ls);

#endif