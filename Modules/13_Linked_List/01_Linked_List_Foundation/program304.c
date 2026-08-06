/*
---------------------------------------------------------
Purpose  : Demonstrate structure packing.
Concepts : pragma pack, Memory Alignment.
New      : Eliminates compiler padding in structures.
Change   : Optimizes node memory representation.
---------------------------------------------------------
*/

#include<stdio.h>

#pragma pack(1)
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