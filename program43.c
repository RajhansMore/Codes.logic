//take input from user in form of number and see how many odd digits are present

#include<stdio.h>

int CountOddDigit(int iNO)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNO;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if((iDigit % 2) != 0)
        {
            iCnt++
        }
        iNo = iNO/10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;


    printf("Enter number\n");
    scanf("&d",&iValue1);

    iRet = CountOddDigit(iValue1);

    printf("Odd digits in number are : %d",iRet);

    return 0;
}
