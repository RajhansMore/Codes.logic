//take input from user(decimal formate) and printf the binary of that number

#include<iostream>
using namespace std;

void DisplayBinary(int iNo)
{
    int iDigit = 0;

    cout<<"Binary conversion of "<<iNo<<" is :"<<"\n";

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        cout<<iDigit;
        iNo = iNo /2;
    }
    cout<<"\n";

}

int main()
{   
    int iValue = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    DisplayBinary(iValue);

    return 0;
}