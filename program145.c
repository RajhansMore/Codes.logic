#include<stdio.h>

//travel till end of dest
//copy data from src to dest
// write '\0' at the end of dest

void strNcatX(char *src, char *dest, int iLength)
{
//travel till end of dest
    while(*dest != '\0')
    {
        dest++;
    }

//copy data from src to dest
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
        iLength--;
        if(iLength == 0)
        {
            break;
        }
    }
    // write '\0' at the end of dest
    *dest = '\0';
}

int main()
{
    int iNo = 0;
    char Arr[20];
    char Brr[20] = "Demo";

    printf("Enrter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter a number you want to concate : ");
    scanf("%d",&iNo);

    strNcatX(Arr,Brr,iNo);

    printf("String after co incatnetions : %s\n",Brr);

    return 0;
}