#include<stdio.h>

//travel till end of dest
//copy data from src to dest
// write '\0' at the end of dest

void strcatX(char *src, char *dest)
{
//travel till end of dest
    while(*dest != '\0')
    {
        dest++;
    }
    *dest = ' ';
    dest++;
//copy data from src to dest
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    // write '\0' at the end of dest
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";

    printf("Enrter string :\n");
    scanf("%[^'\n']s",Arr);

    strcatX(Arr,Brr);

    printf("String after copy is : %s\n",Brr);

    return 0;
}