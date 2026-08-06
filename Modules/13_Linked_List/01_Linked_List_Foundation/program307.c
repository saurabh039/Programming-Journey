/*
---------------------------------------------------------
Purpose  : Access node members using pointers.
Concepts : Structure Pointers, Arrow Operator.
New      : Uses '->' to access structure members.
Change   : Introduces pointer-based node manipulation.
---------------------------------------------------------
*/

#include<stdio.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;


int main()
{
    struct node *head = NULL;
    NODE obj;

    head = &obj;
    head->data = 11;
    head->next=NULL;

    return 0;
    
}
