//write a program which checks wether number is even or odd.

#include<stdio.h>      //for printf and scanf
#include<stdbool.h>    // for bool data type

//////////////////////////////////////////////////////////////////////////////
//
//Function name:        CheckEvenOdd
//Input:                integer
//Output:               boolean
//Description:          checks wehter input is even or odd 
//Author:               Rajhans Rahul More
//Date:                 25/04/2023
//
//////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
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

    printf("Enter the number to check whether it is even or odd : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);   //function call

    if(bRet == true)
    {
        printf("%d is a even number\n",iValue);
    }

    else
    {
        printf("%d is odd number",iValue);
    }
    return 0;
}
























/*
    10 * 2 = 22
    10 / 2 = 5
    10 % 2 = 0




*/