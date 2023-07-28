//LinkedList singly linear Application in C++

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
    PNODE temp = First;

    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        temp = First;
        First = First -> next;
        delete temp;
    }

}

int main()
{
    SinglyLL obj;
    int iChoice = 0;
    int iValue = 0;
    int iPosition = 0;

    cout<<"marvellous LL application\n";

    while(1)
    {
        cout<<"-----------------------------------------\n";
        cout<<"Please enter your choice\n\n";

        cout<<"1 : Insert node at first position\n";
        cout<<"2 : Insert node at last position\n";
        cout<<"3 : Insert node at given position\n";
        cout<<"4 : delete node at first position\n";
        cout<<"5 : delete node at last position\n";
        cout<<"6 : delete node at given position\n";
        cout<<"7 : Display elements of LL\n";
        cout<<"8 : Count number of nodes from LL\n";
        cout<<"9 : Terminate the application\n";

        cin>>iChoice;

        cout<<"-----------------------------------------\n";

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value you want to insert : \n";
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;
            case 2:
                cout<<"Enter the value you want to insert : \n";
                cin>>iValue;
                obj.InsertLast(iValue);
                break;
            case 3:
                cout<<"Enter the position you want to insert : \n";
                cin>>iPosition;
                obj.InsertAtPos(iValue, iPosition);
                break;
            case 4:
            
                obj.DeleteFirst();
                break;
            case 5:
            
                obj.DeleteLast();
                break;
             case 6:
                cout<<"Enter the position : \n";
                cin>>iPosition;
                obj.DeleteAtPos(iPosition);
                break;
            case 7:
                obj.Display();
                break;
            case 8:
                cout<<"Number of elements are :"<<obj.Count()<<"\n";
                break;
            case 9:
                cout<<"thank you for using the application!!\n";
                return 0;
            default:
                cout<<"Invalid Choice\n";
                break;
        }
    }

    return 0;
}