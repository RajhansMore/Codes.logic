/*
 input:
    row: 4
    columns: 4

 output:
    *   *   *   *
    *   *   *
    *   *
    *
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

    for(i = iRow; i>=1; i--) //outer
    {
        for(j = 1; j <= i; j++)  //inner
        {
            printf("*\t");
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