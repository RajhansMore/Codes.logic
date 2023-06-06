/*
 input:
    row: 4
    columns: 4

 output:
    *   $   $   $
    $   *       $
    $       *   $
    $   $   $   *
*/

#include<stdio.h>   

void Display(int iRow, int iCol)
{
    int j = 0;
    int i = 0;
    if(iRow != iCol)
    {
        printf("Invalid input");
        return;
    }

    for(i = 1; i<=iRow; i++) //outer
    {
        for(j = 1; j<= iCol; j++)  //inner
        {
            if (( (i == j)))
            {
                printf("*\t");
            }
            else if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
            {
                printf("$\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
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