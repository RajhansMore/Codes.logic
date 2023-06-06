//take 2 input from user in form of number and digit and see how many times the digit is present in the number

#include<stdio.h>

int ChkDigit(int iNO, int iSearch)
{
    int iDigit = 0;
    int iCnt = 0;

    if((iSearch < 0) || (iSearch > 9))
    {
        printf("Enter the digit in range 0-9");
        return 0;
    }
    if(iNo < 0)
    {
        iNo = -iNO;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == iSearch)
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
    int iValue2 = 0;

    printf("Enter number\n");
    scanf("&d",&iValue1);

    printf("Enter digit (from 0-9) :");
    scanf("%d",&iValue2`)

    iRet = ChkDigit(iValue1,iValue2);

    printf("the occurance of digit is %d",iRet);

    return 0;
}
