#include<stdio.h>
int CountSpace(char *str, char cch)
{
    int iCount = 0;
    while(( *str != '\0'))
    {
        if(*str == cch)
        {
            iCount++;
        }
        str++;  
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    char ch = '\0';

    printf("ENter your name : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the elements :\n");
    scanf(" %c",&ch);

    iRet = CountSpace(Arr,ch);

    printf("number of frequency is : %d",iRet);
    
    return 0;
}