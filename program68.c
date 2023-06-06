//accept n number from user and aceept another n umber and search the number in array

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iValue)
{
    int iCnt = 0;
    bool iFlag = false;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) == iValue)
        {
            iFalg = true;
            break;
            
        }
    }
    return iFlag;
}

int main()
{
    int iCnt = 0;
    int iSize = 0;
    int *p = NULL;
    int iSearch = 0;
    bool bRet = false;

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

    printf("Enter the number u want to search : \n");
    scanf("%d",&iSearch);

    printf("Elements of the array are :\n");
    for(iCnt = 0; iCnt < iSize ;iCnt++)
    {
        printf("%d\t",p[iCnt]);
    }

    bRet = Search(p,iSize,iSearch);

    if(bRet == true)
    {
        printf("The number is present\n");
    }
    else
    {
        printf("The number is not present\n");
    }
    
    free(p);

    return 0;
}