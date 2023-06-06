
//accept n numbers and print the minimum number
#include<stdio.h>
#include<stdlib.h>

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
    int bRet = 0;

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

    bRet = Min(p,iSize);

    printf("minimum number is : %d",bRet);
    
    free(p);

    return 0;
}