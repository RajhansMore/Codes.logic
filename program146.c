#include<stdio.h>


void strNcpyX(char *src, char *dest, int iLength)
{
    while((*src != '\0') && (iLength != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iLength--;
    }
    *dest = '\0';
}

int main()
{
    int iNo = 0;
    char Arr[20];
    char Brr[20];

    printf("Enrter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a number you want to copy : ");
    scanf("%d",&iNo);

    strNcpyX(Arr,Brr,iNo);

    printf("String after co incatnetions : %s\n",Brr);

    return 0;
}