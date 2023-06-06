/*
 input:
    row: 3
    columns: 5

 output:
    a   a   a   a   a
    b   b   b   b   b
    c   c   c   c   c
*/

#include<stdio.h>   

void Display(int iRow, int iCol)
{
    int j = 0;
    int i = 0;
    char ch = '\0';
    for(i = 1, ch = 'a'; i<=iRow; i++ , ch++) //outer
    {
        for(j = 1; j<= iCol; j++)  //inner
        {
            printf("%c\t",ch);
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