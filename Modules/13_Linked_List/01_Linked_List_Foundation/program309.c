/*
---------------------------------------------------------
Purpose  : Demonstrate dynamic node allocation.
Concepts : malloc(), Heap Memory.
New      : Allocates linked list nodes at runtime.
Change   : Introduces dynamic memory management.
---------------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE ptr = NULL;

    ptr = (PNODE)malloc(sizeof(NODE));
    
    //use the node 

    free(ptr);

    return 0;
}
