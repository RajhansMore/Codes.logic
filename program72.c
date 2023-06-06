//printf #
//input 7  output : # # # # # # 
//input 3
//output : # # #

#include<stdio.h>
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++ )
    {
        printf("#\t");
    }


}

int main()
{
    int iFrequency = 0;
    printf("Enter the number of frequency : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}