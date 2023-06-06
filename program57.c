//accept N number from user and perform the addition of that N numbers

#include<stdio.h>
#include<stdlib.h>  // for memory management

int Addition(int Arr[], int iLenght)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main ()
{
    int iSize = 0; // to store size of array
    int *ptr = NULL; //to store address of array
    int iCnt = 0; // loop counter
    int iRet = 0;

    //step 1: accept number of elements from user
    printf("Enter number of elemts : \n");
    scanf("%d",&iSize);

    //step two: allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    //step three: accept the values from user

    printf("Enter the elemets : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("elements of array are: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        printf("%d\n",ptr[iCnt]);
    }

    //sterp four: pass the array to the functon
    iRet = Addition(ptr, iSize);  //Demo(400,4)  refer nb.
    printf("Additon is %d",iRet);
    //step six: de-allocate the memory of array
    free(ptr);

    return 0;
}