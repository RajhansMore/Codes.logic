//LinkedList in C++

#include<iostream>
using namespace std;


typedef struct node
{
    int data;
    struct node *next;

}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:
        PNODE First;    // Characteristics
        int iCount;     // Characteristics

    public:
        SinglyLL();
        ~SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

//implementations of all behaviours

/*
    return_Value Class_Name :: Function_Name(Parameter_List)
    {
        Function_Body;
    }
*/

void SinglyLL :: InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;    //newn = (PNODE)malloc(sizeof(NODE)); in C

    newn -> data = no;
    newn -> next =NULL;

    if(First == NULL)   //LL is empty
    {
        First = newn;
    }
    else                // LL contains atleast one node in it
    {
        newn -> next = First;
        First = newn;
    }
    iCount++;
}

void SinglyLL :: InsertLast(int no)
{
    PNODE temp = First;
    PNODE newn = NULL;
    newn = new NODE;    //newn = (PNODE)malloc(sizeof(NODE)); in C

    newn -> data = no;
    newn -> next =NULL;

    if(First == NULL)   //LL is empty
    {
        First = newn;
    }
    else                // LL contains atleast one node in it
    {
        while((temp -> next) != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}

void SinglyLL :: InsertAtPos(int no, int iPos)
{
    if((iPos < 1) || ( iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE temp = NULL;

        for(int iCnt = 1; iCnt < iPos; iCnt++)
        {
            temp = temp -> next;
        }

        PNODE newn = First;
        newn -> data = no;
        newn -> next = NULL;

        newn -> next = temp -> next;
        temp -> next = newn;

        iCount++;
    }
}

void SinglyLL :: DeleteFirst()
{
    if(First == NULL)                   //empty LL
    {
        return;
    }
    else if(First -> next == NULL)      //Single noded LL
    {
        delete First;   //free(First); in C
        First = NULL;   
    }
    else                                //more than one node in LL
    {
        PNODE temp = First;

        First = First -> next;
        delete temp;
    }
    iCount--;
}

void SinglyLL :: DeleteLast()
{
    if(First == NULL)                   //empty LL
    {
        return;
    }
    else if(First -> next == NULL)      //Single noded LL
    {
        delete First;   //free(First); in C
        First = NULL;   
    }
    else                                //more than one node in LL
    {
        PNODE temp = First;
        while((temp -> next -> next) != NULL)
        {
            delete temp -> next;
            temp -> next = NULL;
        }
    }
    iCount--;
}

void SinglyLL :: DeleteAtPos(int iPos)
{
    if((iPos < 1) || ( iPos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;
        PNODE tempX = NULL;

        for(int iCnt = 1; iCnt < iPos - 1; iCnt ++)
        {
            temp = temp -> next;

        }
        tempX = temp -> next;
        temp -> next = temp ->next -> next;

        delete tempX;
        iCount--;
    }
}

void SinglyLL :: Display()
{
    PNODE temp = First;
    cout<<"Elements of LL Are : "<<"\n";

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp -> next;
    }
    cout<<"NULL"<<"\n";
}

int SinglyLL :: Count()
{
    return iCount;
}

SinglyLL :: SinglyLL()
{
    cout<<"Inside Constructor\n";

    First = NULL;
    iCount = 0;
}

SinglyLL :: ~SinglyLL()
{
    cout<<"Inside Destructor\n";
}

int main()
{
    SinglyLL obj1;
    SinglyLL obj2;

    int iRet = 0;

    //cout<<"Size of LinkedList is "<<obj1.iCount; -> error coz private member
    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.InsertLast(101);
    obj1.InsertLast(111);

    obj1.InsertAtPos(55,4);

    obj1.Display();

    obj1.DeleteAtPos(4);

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of elements of obj1 are : "<<iRet<<"\n";

    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();
    iRet = obj1.Count();

    cout<<"Number of elements of obj1 are : "<<iRet<<"\n";

    return 0;
}