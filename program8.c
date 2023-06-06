//write a program which accepts the marks and displas class accordingly
// 0 - 34   fail
// 34 -49   pass class
// 50 - 59  second class
//60 - 74   first class
// 75 - 100 first class with distinction

#include<stdio.h>      //for printf and scanf

void DisplayClass(float fMarks)
{
    if ((fMarks<0.0f) || (fMarks > 100.00)) //filter
    {
        printf("invalid input please enter marks btw range 0-100 \n");
        return;
    }
    if((fMarks >= 0.0) && (fMarks < 35.00f))
    {
        printf("You are fail \n");
    }
    else if((fMarks >= 35.00f) && (fMarks < 50.00f))
    {
        printf("You got pass class \n");
    }
    else if((fMarks >= 50.00f) && (fMarks < 60.00f))
    {
        printf("you got second class\n");
    }
    else if ((fMarks >= 60.00f) && (fMarks < 75.00f))
    {
        printf("You got first class \n");
    }
    else if((fMarks >= 75.00f) && (fMarks <= 100.00f))
    {
        printf("You got first class with distinction \n");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("please enter your percentage out of 100 : \n");
    scanf("&f",&fValue);

    DisplayClass(fValue);

    return 0;
}
