
//accept n numbers and print the gretest and smallest number
#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = 0;
    int iMin = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) > iMax)
        {
            iMax = Arr[iCnt];
        }
        if((Arr[iCnt]) < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
        printf("Largest element is : %d",iMax);
        printf("smallest element is : %d",iMin);
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

    MaxMin(p,iSize);
    
    free(p);

    return 0;
}