#include<stdio.h>
int CountSpace(char *str)
{
    int iCount = 0;
    while(( *str != '\0'))
    {
        if(*str == ' ')
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

    iRet = CountSpace(Arr);

    printf("number of vowel spcaes are : %d",iRet);
    

    return 0;
}