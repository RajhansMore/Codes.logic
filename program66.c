
//accept n numbers and print the minimum and maximum number
#include<stdio.h>
#include<stdlib.h>

int Max(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;

}
int Min(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;

}
int main()
{
    int iCnt = 0;
    int iSize = 0;
    int *p = NULL;
    int bRetSmall = 0;
    int bRetMax = 0;

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

    bRetMax = Max(p,iSize);

    printf("Largest number is : %d",bRetMax);

    bRetSmall = Min(p,iSize);

    printf("Smallest number is : %d",bRetSmall);
    
    free(p);

    return 0;
}