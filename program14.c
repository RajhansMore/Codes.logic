//Display "Jay Ganesh" 5 times on screen

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     //updater
    {
        iNo = -iNo;
    }
    
    //       1          2      3
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("Jay Gensh...\n"); // 4
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency of Jay ganesh : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}