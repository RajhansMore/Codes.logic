#include<stdio.h>
#include<strlen.h>

int main()
{
    char Arr[20];
    int iRet = 0;


    printf("ENter your name : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlen(Arr);

    printf("KLength of stering is : %d",iRet);
    

    return 0;
}