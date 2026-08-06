/*
---------------------------------------------------------
Purpose  : Simplify structure declarations using typedef.
Concepts : typedef, Structure Aliasing.
New      : Replaces 'struct node' with NODE.
Change   : Improves readability of linked list code.
---------------------------------------------------------
*/

#include<stdio.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;     //with this we can replace struct node with NODE

int main()
{
    // struct node obj;
    NODE obj;

    printf("%ld\n",sizeof(obj));

    return 0;
    
}
