//printf numbers
//input 7  output :   1 2 3 4 5 6 7
//input 3
//output : 1 2 3

#include<stdio.h>
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++ )
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