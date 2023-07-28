//QUEUE

#include<iostream>
using namespace std;


typedef class Node
{
    public:
        int data;
        Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }

}NODE, *PNODE;

class Queue
{
    private:
        PNODE First;
        int iCount;

    public:
        Queue();
        void ENqueue(int no);
        int DEqueue();
        void Display();
        int Count();
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}
void Queue :: ENqueue(int no)    //InsertLast;
{
    PNODE newn = new NODE(no);

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}
int Queue :: DEqueue()      //deleteFirst
{
    int Value = 0;

    if(First == NULL)
    {
        cout<<"Queue is empty\n";
    }
    else if (iCount == 1)
    {
        Value = First -> data;
        delete First;
    }
    else
    {
        Value = First-> data;
        PNODE temp =First;
        First = First -> next;
        delete temp;
    }
    iCount--;
    return Value;
}
void Queue :: Display()
{
    PNODE temp = First;

    if(iCount == 0)
    {
        cout<<"Nothing to display as queue is empty\n";
        return;

    }

    cout<<"Elements of queue are : \n";
    
    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        cout<<temp->data<<"\n";
        temp = temp -> next;
    }
}
int Queue :: Count()
{
    return iCount;
}

int main()
{
    int iChoice = 1;
    int iValue = 0;
    int iRet = 0;

    Queue obj;

    cout<<"------------------------------------------------------\n";
    cout<<"Dynamic implementation of queue\n";
    cout<<"------------------------------------------------------\n";

    while(iChoice != 0)
    {
        cout<<"------------------------------------------------------\n";

        cout<<"1 : Insert element into queue\n";
        cout<<"2 : Remove element into queue\n";
        cout<<"3 : Display elements from queue\n";
        cout<<"4 : Count number of elements from queue\n";
        cout<<"0 : terminate the application\n";
        cout<<"------------------------------------------------------\n";

        cout<<"Please enter the option\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the element that you want to push\n";
                cin>>iValue;
                obj.ENqueue(iValue);
                break;

            case 2:
                iRet = obj.DEqueue();
                if(iRet != -1)
                {
                    cout<<"Popped element from queue is : "<<iRet<<"\n";
                }
                break;

            case 3:
                obj.Display();
                break;

            case 4:
                iRet = obj.Count();
                cout<<"Number of elements are : "<<iRet<<"\n";

            case 0:
                cout<<"Thank you for using application\n";
                break;

            default:
                cout<<"please enter valid option\n";
                break;

        }   //End of switch 
    }       //end of while

    return 0;
}           //end of main