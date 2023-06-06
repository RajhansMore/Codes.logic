//learning problems on N numbers
#include<stdio.h>
#include<stdlib.h>  // for memory management

//void Demo(int * Arr, int iLength)
void Demo(int Arr[], int iLenght)
{
    //sterp five: perform the operration on array

}

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
        scanf("%d",&ptr[iCnt]);
    }

    printf("elements of array are: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        printf("%d\n",ptr[iCnt]);
    }
    //sterp four: pass the array to the functon

    Demo(ptr, iSize);  //Demo(400,4)  refer nb.

    //step six: de-allocate the memory of array

    free(ptr);

    return 0;
}