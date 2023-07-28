//accept one number from user and check whether its 21st, 14th and 7th bit is on or off
//with UNSIGNED, mask in hexadecimal


#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{   
    UINT iMask = 0X00102040;
    UINT iResult = 0;

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
    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"21st, 14th and 7th bit in on "<<"\n";
    }
    else
    {
        cout<<"21st, 14th and 7th bit is off "<<"\n";
    }

    return 0;
}