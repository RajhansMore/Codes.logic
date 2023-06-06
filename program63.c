//syntax for n numbers
#include<stdio.h>
#include<stdlib.h>

void fun(int Arr[], int iLength)
{


}

int main()
{
    int iCnt = 0;
    int iSize = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof ( int));

    if( p == NULL)
    {
        printf("Unable to alllocate memory\n");
        return -1;
    }

    printf("Enter the numbers:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Elements of the array are :\n");
    for(iCnt = 0; iCnt < iSize ;iCnt++)
    {
        printf("%d\t",p[iCnt]);
    }

    fun(p,iSize);
    
    free(p);

    return 0;
}