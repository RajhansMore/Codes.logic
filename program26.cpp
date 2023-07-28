//accept one number from user and turn OFF the 7th bit and return the number after change 
//WITHOUT CHECKING******

#include<iostream>
using namespace std;
typedef unsigned int UINT;

/// 1111    1111    1111    1111    1111    1111    1011    1111
///   F       F       F       F       F       F      B       F


int ToggleBit(UINT iNo)
{
    UINT iMask = 0XFFFFFFBF;
    UINT iResult = 0;

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


    iRet = ToggleBit(iValue);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}
