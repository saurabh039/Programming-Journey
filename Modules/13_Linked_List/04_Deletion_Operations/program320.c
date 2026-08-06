/*
---------------------------------------------------------
Purpose  : Delete the first node from the linked list.
Concepts : Head Deletion, Memory Deallocation.
New      : Handles empty, single-node and multi-node cases.
Change   : Safely removes the first node and updates the head.
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

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;

    if ((*first) == NULL)   //LL is empty 
    {    
        (*first) = newn;
    }
    else                  //LL contain atleast 1 mnde
    {
        newn->next = (*first);
        (*first) = newn;
    }
}


void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = no;
    newn -> next = NULL;

    if ((*first) == NULL)   //LL is empty 
    {    
        (*first) = newn;
    }
    else                  //LL contain atleast 1 mnde
    {
        // while((*first)->next != NULL){
        //     (*first)=(*first)->next;
        // }
        // (*first)->next = newn;
        // if we directly modify the head the list will be lost hence use temp

        PNODE temp = *first;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next = newn;
    }

    

}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first->data);
        first = first->next;
    }
    printf(" NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;
    while(first != NULL)
    {
        iCount ++;
        first=first->next;
    }

    return iCount;
}

int main()
{
    int iRet = 0;

    PNODE head = NULL;

    InsertFirst(&head,75);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);

    iRet = Count(head);

    printf("Number of nodes are: %d",iRet);

    return 0;
}