//take input from user and find its factors(which number are able to divide)
#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}