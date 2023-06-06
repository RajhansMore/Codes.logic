//takr inputs from user and find ther average in float

#include<stdio.h>

float Digitsaverage(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo%10;
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo/10;
    }
    return ((float)iSum / (float)iCount);
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number\n");
    scanf("&d",&iValue);

    fRet = DigitsAverage(iValue);

    printf("average value of digits is %d",fRet);

    return 0;
}
