//take input from user and return the Generic root of that number
//generic root = sum of digits of number until its not less than 10
/*
    iNo = 123456
    iSum = 1 + 2+ 3+ 4+ 5 + 6
    iSum = 21

    iNo = 21
    iSum = 2+1
    iSum = 3
    generic root = 3
 */

import java.util.*;

class program9              //put the class with main function on the top
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int iNo = sobj.nextInt();

        Digits nobj = new Digits();

        int iRet = nobj.GenericRoot(iNo);

        System.out.println("number is : "+iRet);
    }
}

class Digits
{
    public int GenericRoot(int iNo)
    { 
        int iDigit = 0;
        int iSum = 0;
        {
            while(iNo > 10)
            {
                while(iNo != 0 )
                {
                    iDigit = iNo % 10;
                    iSum = iSum + iDigit;
                    iNo = iNo / 10 ;
                }

                if(iSum > 10)
                {
                    iNo = iSum;
                    iSum = 0;
                }
                else
                {
                    iNo = iSum;
                    break;
                }
                
            }
            return iSum;
        }
    }
}
