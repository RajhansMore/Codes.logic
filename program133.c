#include<stdio.h>
#define ERR_NOTFOUND -1
void EditString(char *str)
{

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enrter string :\n");
    scanf("%[^'\n']s",Arr);

    EditString(Arr);

    printf("String after editing is : %s\n",Arr);

    return 0;
}