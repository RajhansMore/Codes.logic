#include<stdio.h>

void EditCapital(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str+32;
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