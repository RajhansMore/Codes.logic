#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int Data;
    struct Node *Next;

}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn-> Data = No;
    newn -> Next = NULL;

    if((*Head == NULL) && (*Tail == NULL)) //LL is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }
    (*Tail) -> Next = *Head;
}
void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn-> Data = No;
    newn -> Next = NULL;

    if((*Head == NULL) && (*Tail == NULL)) //LL is empty
    {
        *Head = newn;
        *Tail = newn;

        (*Tail) -> Next = *Head;
    }
    else
    {
        (*Tail) -> Next = newn;
        (*Tail ) = (*Tail ) -> Next;        // (*Tail) = newn;
    }
    (*Tail ) -> Next = *Head;
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
{
    int iLength = 0;
    PNODE temp = *Head;
    int iCnt = 0;

    PNODE newn = NULL;

    iLength = Count(*Head, *Tail);
    if((iPos < 1) || ( iPos > iLength +1 ))
    {
        printf("Invalid posotion\n");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(Head,Tail,No);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos + 1; iCnt++)
        {

            temp = temp -> Next;
        }
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> Data = No;
        newn -> Next = NULL;

        newn -> Next = temp -> Next;
        temp -> Next = newn;
    }
}
void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && ( *Tail ==NULL ))     //A
    {
        return;
    }
    else if ((*Head) == (*Tail))    //B
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
         
    }
    else    //C
    {
        *Head = (*Head) -> Next;
        free((*Tail) -> Next);
        *Tail = *Head;
    }
}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;
    if((*Head == NULL) && ( *Tail ==NULL ))     //A
    {
        return;
    }
    else if ((*Head) == (*Tail))    //B
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
         
    }
    else    //C
    {
        while(temp -> Next != *Tail)
        {
            temp = temp -> Next;
        }
        free(*Tail);
        (*Tail) -> Next  = *Head;
    }
}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
    int iLength = 0;
    PNODE temp = *Head;
    int iCnt = 0;
    iLength = Count(*Head ,*Tail);

    PNODE TempX = NULL;

    if((iPos < 1) || ( iPos > iLength ))
    {
        printf("Invalid posotion\n");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(Head,Tail);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos + 1; iCnt++)
        {
            temp = temp -> Next;
        }
        TempX -> Next = temp -> Next -> Next;
        free(TempX);
    }
}
void Display(PNODE Head, PNODE Tail)
{
    if(Head != NULL &&  Tail != NULL)
    {
        do
        {
            printf("|%d| ->",Head -> Data);
            Head = Head -> Next;
        } while (Head != Tail ->Next);
        printf("\n");
    }
    else
    {
        printf("LinkedList is empty\n");
    }
}
int Count(PNODE Head, PNODE Tail)
{
    int iCount = 0;
    if(Head != NULL &&  Tail != NULL)
    {
        do
        {
            iCount++;
            Head = Head -> Next;
        } while (Head != Tail ->Next);
        return iCount;
    }
    else
    {
        return 0;
    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;      //#

    int iRet = 0;

    InsertFirst(&First, &Last,51);
    InsertFirst(&First, &Last,21);
    InsertFirst(&First, &Last,11);

    InsertLast(&First, &Last,101);
    InsertLast(&First, &Last,111);
    InsertLast(&First, &Last,121);

    Display(First,Last);
    iRet = Count(First,Last);

    printf("Number of nodes are %d \n",iRet);

    InsertAtPos(&First,&Last,55,4);
    
    Display(First,Last);
    iRet = Count(First,Last);

    printf("Number of nodes are %d \n",iRet);
    DeleteAtPos(&First,&Last,4);

    Display(First,Last);
    iRet = Count(First,Last);

    printf("Number of nodes are %d \n",iRet);

    DeleteFirst(&First,&Last);
    DeleteLast(&First,&Last);
    Display(First,Last);
    iRet = Count(First,Last);

    printf("Number of nodes are %d \n",iRet);


    return 0;
}