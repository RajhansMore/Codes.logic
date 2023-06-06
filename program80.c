//print abcd in capital with updation
//input 7  output : a   b   c   d   e   f   g
//input 3
//output : a    b   c  


#include<stdio.h>   
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    char ch = '\0';
    for(iCnt = 0, ch = 'A'; iCnt  <= iValue; iCnt++, ch++)
    {
        printf("%c\t",ch);
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