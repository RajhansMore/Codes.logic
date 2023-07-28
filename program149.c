#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int Data;
    struct Node *next;
    struct Node *Prev;  // # 
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No )
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;
    newn->Prev = NULL; // #

    if(*Head == NULL)   //Linked list is empty
    {
        *Head = newn;
    }
    else                //LL contains atleast one node in it
    {
        (*Head) -> Prev = newn;     // #
        newn -> next = *Head;
        *Head = newn; 
    }

}
void InsertLast(PPNODE Head, int No)
{
    PNODE temp = *Head;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;
    newn->Prev = NULL; // #

    if(*Head == NULL)   //Linked list is empty
    {
        *Head = newn;
    }
    else                //LL contains atleast one node in it
    {
        while(temp -> next != NULL)  //type 2
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn -> Prev = temp;    //#
    }

}
void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int iLength = 0;
    iLength = Count(*Head);

    int iCnt = 0;
    PNODE temp = *Head;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > iLength +1))
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(Head, No);
    }
    else if (iPos == iLength + 1)
    {   
        InsertLast(Head , No);
    }
    else
    {
        for(iCnt = 0; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }
        PNODE newn = NULL;
        newn = (PNODE)malloc(sizeof(NODE));

        newn->Data = No;
        newn->next = NULL;
        newn->Prev = NULL; // #

        newn -> next = temp -> next;    // 1
        temp -> next -> Prev = newn;    // # 2
        temp -> next = newn;            // 3
        newn -> Prev = temp;            // # 4 

    }
}
void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)   //LL is empty
    {   
        return;
    }
    else if((*Head) -> next == NULL)    //LL contains 1 node
    {
        free(*Head);
        *Head = NULL;
    }
    else                              //LL contains more than 1 node
    {
        *Head = (*Head) ->next;
        free((*Head) -> Prev);  //#
        (*Head) -> next = NULL; //#
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head == NULL)   //LL is empty
    {   
        return;
    }
    else if((*Head) -> next == NULL)    //LL contains 1 node
    {
        free(*Head);
        *Head = NULL;
    }
    else                              //LL contains more than 1 node
    {   
        while(temp -> next -> next)
        {
            temp = temp -> next;    //type 3
        }
        free(temp -> next);
        temp -> next = NULL;
    }
}
void DeleteAtPos(PPNODE Head, int No, int iPos)
{
        int iLength = 0;
    iLength = Count(*Head);

    int iCnt = 0;
    PNODE temp = *Head;

    if((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if (iPos == iLength + 1)
    {   
        DeleteLast(Head);
    }
    else
    {
        for(iCnt = 0; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next ->next; // 1
        free(temp ->next -> Prev);          // # 2
        temp -> next -> Prev = temp;        // # 3
    }
}
void Display(PNODE Head)
{
    printf("Elements of LinkedList are\n");
    printf("NULL <=> ");
    while(Head != NULL)
    {
        printf("| %d | <=> ", Head -> Data);
        Head = Head -> next;
    }
    printf("NULL \n");
}
int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        Head = Head -> next;
        iCount++;
    }
    return 0;
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    iRet = Count(First);
    printf("Number of elemets are %d \n",iRet);

    Display(First);

    InsertLast(&First,111);
    InsertLast(&First,121);

    iRet = Count(First);
    printf("Number of elemets are %d \n",iRet);

    Display(First);
    InsertAtPos(&First,55,4);

    DeleteLast(&First);
    DeleteFirst(&First);

    iRet = Count(First);
    printf("Number of elemets are %d \n",iRet);

    Display(First);



    return 0;
}