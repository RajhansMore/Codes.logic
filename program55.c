//learning problems on N numbers
#include<stdio.h>
#include<stdlib.h>  // for memory management

int main ()
{
    int iSize = 0; // to store size of array
    int *ptr = NULL; //to store address of array
    int iCnt = 0; // loop counter

    //step 1: accept number of elements from user
    printf("Enter number of elemts : \n");
    scanf("%d",&iSize);

    //step two: allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    //step three: accept the values from user

    printf("Enter the elemets : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",ptr[iCnt]);
    }

    printf("elements of array are: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        printf("%d\n",ptr[iCnt]);
    }

    return 0;
}