//take number of elements from user and allocate memory dynamicall and accept the elements
//display the elements

//APPROACH 1

import java.util.*;

class program13
{
    public static void main (String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements");

        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
                  //(iCnt < Arr.length)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("the elements of array are :");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        sobj.close();
    }
}

