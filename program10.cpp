//take input from user(decimal formate) and printf after using bitwise operators of that number

#include<iostream>
using namespace std;

void DisplayBinary(int iNo1, int iNo2)
{
    int iResult = 0;

    iResult = iNo1 & iNo2;
    cout<<"Result of & is : "<<iResult<<"\n";

    iResult = iNo1 | iNo2;
    cout<<"Result of | is : "<<iResult<<"\n";

    iResult = iNo1 ^ iNo2;
    cout<<"Result of ^ is : "<<iResult<<"\n";


}

int main()
{   
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter number 1 : "<<"\n";
    cin>>iValue1;

    cout<<"Enter number 2 : "<<"\n";
    cin>>iValue2 ;

    DisplayBinary(iValue1, iValue2);

    return 0;
}