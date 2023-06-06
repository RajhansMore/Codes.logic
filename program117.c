#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    if((cVAlue >= 'A') && (cValue <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&ch);

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        Printf("%c is a apital letter\n",ch);
    }
    else
    {
        printf("%c is not a capital letter\n",ch);
    }

    return 0;
}