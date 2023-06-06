#include<stdio.h>

void EditToggle(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str+32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str-32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enrter string :\n");
    scanf("%[^'\n']s",Arr);

    EditToggle(Arr);

    printf("String after editing is : %s\n",Arr);

    return 0;
}