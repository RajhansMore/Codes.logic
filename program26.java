/*accept string from user and reverse the string*/

//APPROACH 2 new approach

import java.util.*;

class program26
{
    public static void main (String Arg[])
    {
        Scanner sobj = new Scanner(System.in);


        System.out.println("Enter your name");
        String name = sobj.nextLine();

        StringX obj = new StringX();

        String sret = obj.Reverse(name);

        System.out.println("Result is : "+sret);
    }
}

class StringX
{
    public String Reverse(String str)
    {
        char Arr[] = str.toCharArray();

        int iStart = 0;
        int iEnd = Arr.length - 1;
        char ctemp = ' ';

        while(iStart < iEnd)
        {
            ctemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = ctemp;

            iStart++;
            iEnd--;
        }
        return new String(Arr);
    }
}