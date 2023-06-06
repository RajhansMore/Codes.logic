#include<stdio.h>

int strlenX(char *str)
{
    int iCount = 0;
    while(( *str != '\0'))
    {
        if((*str >= 'A') && (*str <= 'Z'))
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


    printf("ENter your name : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("number of big letters : %d",iRet);
    

    return 0;
}