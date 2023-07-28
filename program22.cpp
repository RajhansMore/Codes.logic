//accept one number from user and turn OFF the 7th of the bit and return number after change
#include<iostream>
using namespace std;
typedef unsigned int UINT;

int OffBit(UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask) //Bit is ON
    {
        return (iNo ^ iMask);
    }
    else                //Bit is OFF
    {
        return iNo;
    }
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter the Number :"<<"\n";
    cin>>iValue;
 
    iRet = OffBit(iValue);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}
