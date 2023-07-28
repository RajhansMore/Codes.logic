// LinkedList First Code***************

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

/*

**TYPEDEF** struct Node
{
    int no;
    struct Node *next;
}NODE, *PNODE, **PPNODE;   *****NOT OBJECTS****

*/
void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d| -> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL\n");

}

int Count(PNODE Head)
{
    int iCount = 0;
    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }

    return iCount;
}

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    //Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));

    //initialise the node
    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL) // LL is empty
    {
        *Head = newn;
    }
    else            //LL contains atleast one node
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    //Allocate memory for node
    newn = (PNODE)malloc(sizeof(NODE));

    //initialise the node
    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL) // LL is empty
    {
        *Head = newn;
    }
    else            //LL contains atleast one node
    {
        while( temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }

}

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int iLength = 0;
    iLength =  Count(*Head);    //calculate length of LL
    int iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = *Head;

    //filter
    if((iPos < 1) || (iPos > iLength + 1))  //invalid pos
    {
        printf("Invalid position\n");
        return;
    }
    
    if(iPos == 1)
    {
        InsertFirst(Head,No);
    }
    else if(iPos == iLength + 1)
    {
        InsertLast(Head,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        //initialise the node
        newn -> data = No;
        newn -> next = NULL;
        for(iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;    //sequence is imp
        temp -> next = newn;
    }

}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)   //LL is empty
    {
        return;
    }
    else if((*Head) -> next == NULL)    //LL contains one node
    {   
        free(*Head);
        *Head = NULL;
    }
    else    //LL contains more tha one node
    {
        *Head = (*Head) -> next;
        free(temp);
    }

}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)   //LL is empty
    {
        return;
    }
    else if((*Head) -> next == NULL)    //LL contains one node
    {   
        free(*Head);
        *Head = NULL;
    }
    else    //LL contains more tha one node
    {
        while(temp -> next -> next != NULL)     //type3 while loop in NB
        {
            temp = temp-> next;

        }        
        free(temp -> next);
        temp-> next= NULL;
    }


}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int iLength = 0;
    iLength =  Count(*Head);    //calculate length of LL
    PNODE temp = *Head;
    int iCnt =0;
    PNODE tempX = *Head;


    
    //filter
    if((iPos < 1) || (iPos > iLength))  //invalid pos
    {
        printf("Invalid position\n");
        return;
    }
    
    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == iLength)
    {
        DeleteLast(Head);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }
        tempX = temp -> next;

        temp->next = temp->next->next;
        free(tempX);
    }

}

int main()
{
    PPNODE Head = NULL;
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,111);      //InsertFirst(60,111);
    InsertFirst(&First,101);      //InsertFirst(60,101);
    InsertFirst(&First,51);      //InsertFirst(60,51);
    InsertFirst(&First,21);      //InsertFirst(60,21);
    InsertFirst(&First,11);      //InsertFirst(60,11);

    Display (First);
    iRet = Count(First);

    printf("Number of nodes are %d \n",iRet);

    printf("\n");

    InsertLast(&First,121);
    InsertLast(&First,151);
    
    Display (First);
    iRet = Count(First);

    printf("Number of nodes are %d \n",iRet);

    InsertAtPos(&First, 25, 5);
    printf("\n");
    Display (First);
    iRet = Count(First);

    printf("Number of nodes are %d \n",iRet);

    DeleteAtPos(&First, 5);
    printf("\n");
    Display (First);
    iRet = Count(First);

    printf("Number of nodes are %d \n",iRet);
    DeleteFirst(&First);
    printf("\n");
    
    Display (First);
    iRet = Count(First);

    printf("Number of nodes are %d \n",iRet);

    DeleteLast(&First);

    printf("\n");
    
    Display (First);
    iRet = Count(First);

    printf("Number of nodes are %d \n",iRet);


    return 0;
}