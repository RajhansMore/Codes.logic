#include<stdio.h>

void EditSmall(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    EditSmall(Arr);

    printf("String after editing is : %s\n",Arr);

    return 0;
}