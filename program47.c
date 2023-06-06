//accept number from user and check if it is pallindrome n umber or not

#include<stdio.h>
#include<stdbool.h>

int CheckPallindrome(int iNo)
{
    int iDigit = 0;
    int iReverse = 0;
    int iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse*10) + iDigit;
        iNo = iNo/10;
    }       
    
    if(iReverse == iTemp)
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
    int iValue = 0;
    bool bRet = false;


    printf("Enter number\n");
    scanf("&d",&iValue);

    bRet = ReverseNumber(iValue);

    if(bRet == true)
    {
        printf("Given number is pallindrome\n");
    }
    else(bRet == false)
    {
        printf("Given number is not pallindrome\n");
    }

    return 0;
}
