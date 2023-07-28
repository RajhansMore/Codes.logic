//STACK 

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

class Stack
{
    private:
        PNODE First;
        int iCount;

    public:
        Stack();
        void Push(int no);
        int Pop();
        void Display();
        int Count();
};

Stack :: Stack()
{
    First = NULL;
    iCount = 0;
}
void Stack :: Push(int no)    //InsertLast;
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
int Stack :: Pop()      //deleteLast
{
    int Value = 0;

    if(iCount == 0)
    {
        cout<<"Stack is empty\n";
    }
    else if (iCount == 1)
    {
        Value = First -> data;
        delete First;
    }
    else
    {
        PNODE temp = First;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        Value = temp -> next -> data;
        delete temp -> next;
        temp -> next = NULL;
    }
    iCount--;
    return Value;
}
void Stack :: Display()
{
    PNODE temp = First;

    if(iCount == 0)
    {
        cout<<"Nothing to display as stack is empty\n";
        return;

    }

    cout<<"Elements of stack are : \n";
    
    for(int iCnt = 1; iCnt <= iCount; iCnt++)
    {
        cout<<temp->data<<"\n";
        temp = temp -> next;
    }
}
int Stack :: Count()
{
    return iCount;
}

int main()
{
    int iChoice = 1;
    int iValue = 0;
    int iRet = 0;

    Stack obj;

    cout<<"------------------------------------------------------\n";
    cout<<"Dynamic implementation of stack\n";
    cout<<"------------------------------------------------------\n";

    while(iChoice != 0)
    {
        cout<<"------------------------------------------------------\n";

        cout<<"1 : Push element into stack\n";
        cout<<"2 : POP element into stack\n";
        cout<<"3 : Display elements from stack\n";
        cout<<"4 : Count number of elements from stack stack\n";
        cout<<"0 : terminate the application\n";
        cout<<"------------------------------------------------------\n";

        cout<<"Please enter the option\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the element that you want to push\n";
                cin>>iValue;
                obj.Push(iValue);
                break;

            case 2:
                iRet = obj.Pop();
                if(iRet != -1)
                {
                    cout<<"Popped element from stack is : "<<iRet<<"\n";
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