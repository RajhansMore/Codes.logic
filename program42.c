//take 2 input from user in form of number and digit and search if the digit is present in the number

#include<stdio.h>
#include<stdbool.h>

int ChkDigit(int iNO, int iSearch)
{
    int iDigit = 0;

    if((iSearch < 0) || (iSearch > 9))
    {
        printf("Enter the digit in range 0-9");
        return false;
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
            break;
        }
        iNo = iNO/10;
    }
    if(iDigit = iSearch)
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
    int iValue1 = 0;
    bool bRet = 0;
    int iValue2 = 0;

    printf("Enter number\n");
    scanf("&d",&iValue1);

    printf("Enter digit (from 0-9) :");
    scanf("%d",&iValue2`)

    bRet = ChkDigit(iValue1,iValue2);

    if(bRet == true)
    {
        printf("%d is present in %d\n",iValue2,iValue1);
    }    
    else
    {
        printf("%d is not present in %d\n",iValue2,iValue1);
    }

    return 0;
}
