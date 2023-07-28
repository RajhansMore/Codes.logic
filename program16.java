//accept n numbers from user and return its summition

//APPROACH 3 

import java.util.*;

class program16
{
    public static void main (String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements");

        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);        
        mobj.Accept();
        mobj.Display();

        System.out.println("Summiation of all elements : "+mobj.Summition());
    }
}

class MyArray extends ArrayX
{
    public MyArray(int iSize)
    {
        super(iSize);
    }

    public int Summition()
    {
        int iSum = 0;
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
}

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int [iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("The elements are :");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
           System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}
