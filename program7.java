//take input from user and return factorial 
//APPROACH 3..

import java.util.*;

class program7              //put the class with mian function on the top
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        int iRet = nobj.Factorail(iNo);

        System.out.println("Factorial is : "+iRet);
    }
}

class Numbers
{
    public int Factorail(int iValue)
    { 
        int iMult = 1;

        for(int iCnt = 1; iCnt <= iValue; iCnt++)
        {
            iMult = iMult * iCnt;
        }
        return iMult;
    }
}
