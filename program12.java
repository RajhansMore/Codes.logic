//take input and check if the number is armstrong number or not    

import java.util.*;

class program12              //put the class with main function on the top
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();
        boolean bRet = dobj.CheckArmstong(iNo);

        if(bRet == true)
        {
            System.out.println("Number is armstrong");
        }
        else
        {
            System.out.println("Number is not armstrong");
        }

    }
}

class Digits
{
    int CountDigits(int iNo)
    {
        int iCount = 0;
        while(iNo != 0)
        {
            iCount++;
            iNo = iNo /10;
        }
        return iCount;
    }

    int Power(int x, int y)
    {
        int iPower = 1;
        for(int iCnt = 1; iCnt <= y, iCnt++)
        {
            iPower = iPower * x;
        }
        return iPower;
    }

    boolean CheckArmstong(int iNo)
    {
        int iCount = 0;
        iCount = CountDigits(iNo);

        int iTemp = iNo;
        int iSum = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + Power(iDigit, iCount);
            iNo = iNo / 10;
        }
        if(iSum == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

/*
    Input : 371
    3 ^ 3 + 7 ^ 3 + 1 ^ 3
    27 + 343 + 1
    371
*/