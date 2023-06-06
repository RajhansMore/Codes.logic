//accept N elements and display average of digits

#include<stdio.h>
#include<stdlib.h>  // for memory management

float Average(int Arr[], int iLenght)
{
    int iCnt = 0;

    int iSum = 0; 

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum = iSum + Arr[iCnt];
        }

    }
    return (float)((float)iSum / (float)iLenght);
}

int main ()
{
    int iSize = 0; // to store size of array
    int *ptr = NULL; //to store address of array
    int iCnt = 0; // loop counter
    float fRet = 0;

    //step 1: accept number of elements from user
    printf("Enter number of elemts : \n");
    scanf("%d",&iSize);

    //step two: allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    //step three: accept the values from user

    printf("Enter the elemets : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr(iCnt));
    }

    //sterp four: pass the array to the functon
    fRet = Average(ptr, iSize);  //Demo(400,4)  refer nb.
    printf("Average is %f\n",fRet);
    //step six: de-allocate the memory of array
    free(ptr);

    return 0;
}