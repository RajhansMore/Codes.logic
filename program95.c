/*
 input:
    row: 4
    columns: 4

 output:
    1   &   3   &
    1   &   3   &
    1   &   3   &
*/

#include<stdio.h>   

void Display(int iRow, int iCol)
{
    int j = 0;
    int i = 0;
    for(i = 1; i<=iRow; i++) //outer
    {
        for(j = 1; j<= iCol; j++)  //inner
        {
            if((j%2) != 0)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("&\t");
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