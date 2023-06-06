//learning problrams on N numbers
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);
    ptr = (int *)malloc(iSize * sizeof(int));

    if (*ptr == NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        printf("memory allocated successfully");
    }


    return 0;
}