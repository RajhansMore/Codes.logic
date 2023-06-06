//Display "1    2   3   4   5" on screen

#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    if(iValue < 0) //filter
    {
        printf("please enter a valid number");
        return;
    }

    for(iCnt = 1; iCnt <=iValue; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iNo = 0; 
    printf("ENTER THE NUMBER : \n");
    scanf("%d",&iNo);


    Display(iNo);

    return 0;
}