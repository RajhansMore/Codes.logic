//print straight and backword numbers
//input 3
//output : 1    2   3   3   2   1


#include<stdio.h>   
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt  <= iValue; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    for(iCnt = iValue; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iFrequency = 0;
    printf("Enter the number of frequency : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}