//take number of elements from user and allocate memory dynamicall and accept the elements
//display the elements

//APPROACH 2 |||||||*****SHOULD BE USED EVERYTIME*****|||||||

import java.util.*;

class program14
{
    public static void main (String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements");

        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);        
        aobj.Accept();
        aobj.Display();

    }
}

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int [iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("The elements are :");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
           System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }

}
