//print a1b2c3
//input 7  output : a 1  b 2  c 3  d 4  e 5  f 6  g  7
//input 3
//output : a 1  b 2  c  3


#include<stdio.h>   
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    char ch = 'a';
    for(iCnt = 1; iCnt  <= iValue; iCnt++)
    {
        printf("%c\t%d\t",ch,iCnt);
        ch++;
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