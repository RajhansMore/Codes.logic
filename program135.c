#include<stdio.h>
#define ERR_NOTFOUND -1
void EditCapital(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = '*';
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = '$';
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enrter string :\n");
    scanf("%[^'\n']s",Arr);

    EditCapital(Arr);

    printf("String after editing is : %s\n",Arr);

    return 0;
}