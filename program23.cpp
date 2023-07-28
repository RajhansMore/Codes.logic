//accept one number and one position from user and turn OFF the given bit and return the number after change 
#include<iostream>
using namespace std;
typedef unsigned int UINT;

int OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << ( iPos -1);

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
    UINT iBit = 0;

    cout<<"Enter the Number :"<<"\n";
    cin>>iValue;
    cout<<"Enter the Position :"<<"\n";
    cin>>iBit;

    iRet = OffBit(iValue,iBit);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}
