//TREE in DSA
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int Data;
    struct Node *next;
    struct Node *Rchild;
    struct Node *Lchild;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn ->Data = no;
    newn -> next =  NULL;
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn ->next = *Head;
        *Head = newn;
    }

}

void Insert(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> Data = iNo;
    newn -> Lchild = NULL;
    newn -> Rchild = NULL;
    if(*Head == NULL)
    
    {
        *Head = newn;
    }

    else
    {
        while(1)
        {
            if(iNo == temp->Data)
            {
                printf("Duplicate element, unable to insert\n");
                free(newn);
                break;
            }
            else if(iNo > temp->Data)
            {
                if(temp -> Rchild == NULL)
                {
                    temp -> Rchild = newn;
                    break;
                }
                temp = temp -> Rchild;
            }
            else if(iNo < temp ->Data)
            {
                if(temp -> Lchild = NULL)
                {
                    temp->Lchild = newn;
                    break;
                }
                temp = temp -> Lchild;
            }
        }
    }
}

void Display(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t",Head -> Data);
        Display(Head -> Lchild);
        Display(Head -> Rchild);
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Insert(&First,21);
    Insert(&First,25);
    Insert(&First,15);

    printf("Elements are:\n");
    Display(First);

    return 0;
}