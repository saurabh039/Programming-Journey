/*
---------------------------------------------------------
Purpose  : Delete the last node from the linked list.
Concepts : Tail Traversal, Node Deletion.
New      : Locates the second-last node before deletion.
Change   : Safely removes the tail node from the list.
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
        PNODE temp = *first;
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next = newn;
    }

}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if ((*first) == NULL)             //Case 1
    {    
        return;
    }
    else if ((*first)->next == NULL)  //Case 2
    {
        free(*first);
        *first = NULL;
    }
    else                              //Case 3
    {
        temp = (*first);
        (*first)=(*first)->next;
        free(temp);
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

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are: %d",iRet);

    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are: %d",iRet);
    
    DeleteFirst(&head);

    return 0;
}