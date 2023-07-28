//take input from user and return multiplication of even factors of that number 
//APPROACH 3..

import java.util.*;

class program8              //put the class with main function on the top
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iNo = sobj.nextInt();

        Numbers nobj = new Numbers();

        int iRet = nobj.EvenFact(iNo);

        System.out.println("Multiplication is is : "+iRet);
    }
}

class Numbers
{
    public int EvenFact(int iValue)
    { 
        int iMult = 1;

        for(int iCnt = 2; iCnt <= iValue; iCnt = iCnt + 2)    //complecity n/2..
        {                                  //(iCnt += 2)
            if((iValue%iCnt) == 0)
            {   
                iMult = iMult * iCnt;   
            }
            if(iMult == 1)
            {
                return 0;
            }
        }
        return iMult;
    }
}
