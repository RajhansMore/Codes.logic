/*accept string from user and convert the capiltal
letters into small letters*/

//APPROACH 2

import java.util.*;

class program23
{
    public static void main (String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name");
        String name = sobj.nextLine();

        StringX obj = new StringX();

        String sret = obj.Strlower(name);

        System.out.println("converted string is : "+sret);

        sret = obj.StrCapital(name);
        System.out.println("converted string is : "+sret);

        sret = obj.StrCapital(name);
        System.out.println("converted string is : "+sret);

    }
}

class StringX
{
    public String Strlower(String str)
    {
        //Step 1 : Convert string to array
        char Arr[] = str.toCharArray();

        //Step 2 : perform operations on array

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
        }

        //step 3: convert array to string
        return new String(Arr);     //inline return

    }

    public String StrCapital(String str)
    {
        //Step 1 : Convert string to array
        char Arr[] = str.toCharArray();

        //Step 2 : perform operations on array

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);
            }
        }

        //step 3: convert array to string
        return new String(Arr);     //inline return

    }

    public String StrToggle(String str)
    {
        //Step 1 : Convert string to array
        char Arr[] = str.toCharArray();

        //Step 2 : perform operations on array

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
        }

        //step 3: convert array to string
        String ret = new String(Arr);

        return ret;
    }
}