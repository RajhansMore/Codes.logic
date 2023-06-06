//take input from the user and print it till 1
#include<stdio.h>
#include<stdbool.h>

void DisplayF(int iNo)
{
    int iCnt = 0;
    iResult = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayF(iValue);

    return 0;

}