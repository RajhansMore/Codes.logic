//accept n number from user and aceept another n umber and search the first occurance

#include<stdio.h>
#include<stdlib.h>
#define ERR_NOTFOUND -1

int SearchFirstOccurance(int Arr[], int iLength, int iValue)
{

    int iCnt = 0;

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if((Arr[iCnt])== iValue)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return -ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int iCnt = 0;
    int iSize = 0;
    int *p = NULL;
    int iSearch = 0;
    int iRet = 0;

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

    iRet = SearchFirstOccurance(p,iSize,iSearch);

    if(iRet == ERR_NOTFOUND)
    {
        printf("there is no such element\n");
    }
    else
    {
        printf("%d occured are index %d\n",iSearch,iRet);
    }
    
    free(p);

    return 0;
}