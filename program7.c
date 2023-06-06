//write a program which checks wether number is divisible by 3 and 5

#include<stdio.h>      //for printf and scanf
#include<stdbool.h>    // for bool data type

//////////////////////////////////////////////////////////////////////////////
//
//Function name:        CheckDivisible
//Input:                integer
//Output:               boolean
//Description:          checks wehter input is divisible by 5 nad 3
//Author:               Rajhans Rahul More
//Date:                 25/04/2023
//
//////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if(((iNo % 3) ==0) && ((iNo % 5) ==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////////////////////
//entry point function
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0; // variable to accept input
    bool bRet= false;  //variable to accept return value

    printf("Enter the number to check whether it is divisible by 3 & 5 : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);   //function call

    if(bRet == true)
    {
        printf("%d is divisible by 3 & 5 \n",iValue);
    }

    else
    {
        printf("%d is not divisible by 3 & 5",iValue);
    }
    return 0;
}
