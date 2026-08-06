/*
---------------------------------------------------------
Purpose  : Demonstrate core linked list operations.
Concepts : Insert, Delete, Display, Count.
New      : Integrates insertion and deletion into one program.
Change   : Builds the first complete singly linked list.
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

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if ((*first) == NULL) 
    {    
        return;
    }
    else if ((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = (*first);

        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }

        free(temp->next);
        temp->next = NULL;
        
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

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are: %d",iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are: %d",iRet);

    return 0;
}