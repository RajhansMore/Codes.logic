//print multiple of two till number (padha)
//input 3
//output : 2    4   6 


#include<stdio.h>   
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    int iMult = 0;
    for(iCnt = 1; iCnt  <= iValue; iCnt++)
    {
        iMult = iCnt*2;
        printf("%d\t",iMult);
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