/*
---------------------------------------------------------
Purpose  : Demonstrate node initialization.
Concepts : Structure Members, Data Assignment.
New      : Assigns values to node data and next pointer.
Change   : Introduces manual node setup.
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
    // struct node obj;
    NODE obj;
    
    obj.data = 11;
    obj.next = NULL;

    return 0;
    
}
