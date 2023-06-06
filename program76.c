//print numbers from 0
//input 7  output : 0 1 2 3 4 5 6
//input 3
//output : 0 1 2 

#include<stdio.h>
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    for(iCnt = ; iCnt <= iValue; iCnt++ )
    {
        printf("%d\t",iCnt - 1);
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