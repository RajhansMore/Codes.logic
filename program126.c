#include<stdio.h>

//a e   i   o   u   A   E   I   O   U
int CountVowels(char *str)
{
    int iCount = 0;
    while(( *str != '\0'))
    {
        if((*str == 'a') || ( *str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u')|| (*str == 'A')|| (*str == 'E')|| (*str == 'I')|| (*str == 'O')|| (*str == 'U'))
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

    iRet = CountVowels(Arr);

    printf("number of vowels are : %d",iRet);
    

    return 0;
}