//take input from user and return the sum of digits in the number

import java.util.*;

class program9              //put the class with main function on the top
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.SumDigits(iNo);

        System.out.println("number is : "+iRet);
    }
}

class Digits
{
    public int SumDigits(int iValue)
    { 
        int iSum = 0;
        // int iDigit = 0;

        if(iValue < 0)
        {
            iValue = -iValue;
        }

        while(iValue != 0)
        {
            // iDigit = iValue % 10;

            iSum = iSum + (iValue % 10);

            iValue = iValue / 10;
        }
        return iSum;
    }
}
