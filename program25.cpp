//accept one number and one position from user and TOGGLE the given bit and return the number after change 
#include<iostream>
using namespace std;
typedef unsigned int UINT;

int ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);

    iResult = (iNo ^ iMask);

    return iResult;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    UINT iBit = 0;

    cout<<"Enter the Number :"<<"\n";
    cin>>iValue;
    cout<<"Enter the position :"<<"\n";
    cin>>iBit;

    iRet = ToggleBit(iValue,iBit);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}
