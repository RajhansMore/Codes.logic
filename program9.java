//take input from user and return the number of digits in the number

import java.util.*;

class program9              //put the class with main function on the top
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iNo = sobj.nextInt();

        Digits nobj = new Digits();

        int iRet = nobj.CountDigits(iNo);

        System.out.println("number is : "+iRet);
    }
}

class Digits
{
    public int CountDigits(int iValue)
    { 
        int iCount = 0;
        int iDigit = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            iCount++;
            iValue = iValue / 10;
        }
        return iCount;
    }
}
