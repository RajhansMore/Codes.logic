/*
 input:
    row: 4
    columns: 4

 output:
    *   a   a   a   a
    b   *   b   b   b
    c   c   *   c   c
    d   d   d   *   d
    e   e   e   e   *
*/

#include<stdio.h>   

void Display(int iRow, int iCol)
{
    int j = 0;
    int i = 0;
    char ch = '\0';

    if(iRow != iCol)
    {
        printf("Invalid input");
        return;
    }

    for(i = 1, ch = 'A'; i<=iRow; i++, ch++) //outer
    {
        for(j = 1; j <= iCol; j++)  //inner
        {
            if(i == j)
            {
                printf("*\t");
            }
            else
            {
                printf("%c\t",ch);
            }
        }
        printf("\n");
    }
}

int main()
{
    int ifrequency1 = 0;
    int ifrequency2 = 0;
    printf("ENter number of rows: \n");
    scanf("%d",&ifrequency1);

    printf("ENter number of columns: \n");
    scanf("%d",&ifrequency2);

    Display(ifrequency1,ifrequency2);

    return 0;
}