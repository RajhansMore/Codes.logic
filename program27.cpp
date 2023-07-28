//accept one number and one position from user and turn OFF the given bit and return the number after change 
//WITHOUT CHECKING******

#include<iostream>
using namespace std;
typedef unsigned int UINT;

/// 1111    1111    1111    1111    1111    1111    1011    1111
///   F       F       F       F       F       F      B       F


int ToggleBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << ( iPos - 1);
    iMask = ~iMask;

    iResult = (iNo & iMask);

    return iResult;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    UINT iBit = 0;

    cout<<"Enter the Number :"<<"\n";
    cin>>iValue;
    cout<<"Enter the Number :"<<"\n";
    cin>>iBit;

    iRet = ToggleBit(iValue,iBit);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}
