#include<stdio.h>

void DisplayR(int iNo)      //recursion
{
    static int iCnt = 1; //static is imp/////////

    while(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo);      //recursive call
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    printf("End of main\n");

    return 0;
}