//take input from user and find its factorial (forward going)
#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int ULONG;
ULONG Factorial(int iNo)
{
    ULONG iSum = 1;
    int iCnt = 0;
    if(iNo <0)
    {
        iNo = -iNo;     //updator
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        iSum = iSum*iCnt;

    }
    return iSum;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}


//backward going
/*


int Factorial(int iNo)
int iCnt = 0;
int iSum = 1;

for(iCnt = iNo; iCnt >0; iCnt--); 
{
    iSum = iSum*iCnt;

}
return iSum;


*/