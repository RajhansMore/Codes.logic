#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int Data;
    struct Node *next;
    struct Node *prev;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> Data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((*Head == NULL) && ( *Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn -> next = *Head;
        (*Head) -> prev = newn;

        *Head = newn;
    }
    (*Head) -> next = *Tail;
    (*Tail) -> next = *Head;
}
void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> Data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((*Head == NULL) && ( *Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail) ->next = newn;
        newn -> prev = *Tail;
        *Tail = newn;
    }
    (*Head) -> next = *Tail;
    (*Tail) -> next = *Head;
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
{
    int iLength = Count(*Head, *Tail);

    PNODE temp = *Head;
    int iCnt = 0;
    PNODE newn = NULL;

    if((iPos < 1) && (iPos > iLength + 1))
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(Head,Tail,No);
    }
    else if(iPos == iLength + 1)
    {
        for(iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> Data= No;
        newn -> next = NULL;
        newn -> prev = NULL;

        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;

    }
}
void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL ) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head) -> next;
        free((*Tail)->next);

        (*Tail) -> next = *Head;
        (*Head) -> prev = *Tail;
    }
}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL ) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Tail = (*Tail) -> prev;

        free((*Tail) -> next);  // free((*Head ) -> prev);

        (*Head) -> prev = *Tail = *Tail;
        (*Tail) -> next = *Head;
    }
}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
    int iLength = Count(*Head, *Tail);

    PNODE temp = *Head;
    int iCnt = 0;
    PNODE newn = NULL;

    if((iPos < 1) && (iPos > iLength + 1))
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(iPos == iLength )
    {
        DeleteLast(Head,Tail);
    }
    else
    {
    
    }
}
void Display(PNODE Head, PNODE Tail)
{
    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            printf("|%d| < = >",Head -> Data);
            Head = Head -> next;

        } while (Head != Tail -> next);

        printf("\n");
    }
    else
    {
        printf("LinkedList is empty\n");
    }

}
int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;

    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            iCnt++;
            Head = Head -> next;

        } while (Head != Tail -> next);      
        return iCnt;  
    }
    else
    {
        return 0;

    }

    return 0;
}
int main()
{
    int iRet = 0;

    PNODE First = NULL;
    PNODE Last = NULL;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121);

    Display(First,Last);

    iRet = Count(First,Last);
    printf("Number of nodes are %d\n",iRet);

    DeleteFirst(&First,&Last);
    DeleteLast(&First,&Last);

    Display(First,Last);

    iRet = Count(First,Last);
    printf("Number of nodes are %d\n",iRet);
    return 0;
}