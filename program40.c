//take input from user in form of number and check whether 8 is present or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int ChkDigit(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == 8)
        {
            break;
        }
        iDigit = iNo/10;
    }
    if(iDigit == 8)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    int iValue = 0;
    int bRet = FALSE;

    printf("Enter number\n");
    scanf("&d",&iValue);

    bRet = ChkDigit(iValue);

    if(bRet == TRUE)
    {
        printf("Digit 8 is present in nymber\n");
    }
    else
    {
        printf("Digit 8 is not present in number\n");
    }

    return 0;
}
