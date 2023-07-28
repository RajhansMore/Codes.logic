//accept one number from user and check whether its nth  bit is on or off(n is given by user)
//with UNSIGNED, mask in hexadecimal

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{   
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    if((iPos < 1 ) || (iPos > 32))
    {
        cout<<"Invalid position"<<"\n";
        return false;
    }
    iMask = iMask << (iPos -1);
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{   
    UINT iValue = 0;
    UINT iBit = 0;
    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the bit position : "<<"\n";
    cin>>iBit;

    bRet = CheckBit(iValue, iBit);

    if(bRet == true)
    {
        cout<<" bit in on "<<"\n";
    }
    else
    {
        cout<<" bit is off "<<"\n";
    }

    return 0;
}