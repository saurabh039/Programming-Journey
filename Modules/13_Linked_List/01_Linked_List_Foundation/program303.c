/*
---------------------------------------------------------
Purpose  : Introduce the basic node structure of a linked list.
Concepts : Self-Referential Structures, Memory Layout.
New      : Defines a node containing data and self-pointer.
Change   : Begins linked list implementation.
---------------------------------------------------------
*/

#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;

    printf("%ld\n",sizeof(obj));

    return 0;
    
}