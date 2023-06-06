//accept number from user and return the smallest digit from that number

#include<stdio.h>

int MinimumDigit(int iNo)
{
    int iDigit = o;
    int iMin = 9;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = ino % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo /10;
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("&d",&iValue);

    iRet = MinimumDigit(iValue);

    printf("Minimum digit is %d",iRet);

    return 0;
}
