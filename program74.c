//print A
//input 7  output : A A A A A A
//input 3
//output : A A A

#include<stdio.h>
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++ )
    {
        printf("A\t");
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