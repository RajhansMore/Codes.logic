//accept number from user and return the largest digit from that number

#include<stdio.h>

int MaximumDigit(int iNo)
{
    int iDigit = o;
    int iMax = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = ino % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo /10;
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("&d",&iValue);

    iRet = MaximumDigit(iValue);

    printf("Maximum digit is %d",iRet);

    return 0;
}
