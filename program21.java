/*accept string from user and calculate the 
number of capital and small letter chars
letter by letter*/

//APPROACH 2

import java.util.*;

class program17
{
    public static void main (String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name");
        String name = sobj.nextLine();

        StringX obj = new StringX();

        int iRetsmall= obj.CountSmall(name);
        System.out.println("Number of small characters are : "+iRetsmall);

        int iRetcap = obj.CountCapital(name);
        System.out.println("Number of Capital characters are : "+iRetcap);
    }
}

class StringX
{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();

        int iCount1 = 0;

        for(int iCnt1 = 0; iCnt1 < Arr.length; iCnt1++)
        {
            if((Arr[iCnt1] >= 'a') && (Arr[iCnt1] <= 'z' ) )
            {
                iCount1++;
            }
        }
        return iCount1;
    }

    public int CountCapital(String str)
    {
        char Arr[] = str.toCharArray();

        int iCount2 = 0;

        for(int iCnt2 = 0; iCnt2 < Arr.length; iCnt2++)
        {
            if((Arr[iCnt2] >= 'A') && (Arr[iCnt2] <= 'Z' ) )
            {
                iCount2++;
            }
        }
        return iCount2;
    }
}