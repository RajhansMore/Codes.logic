/*accept string from user and display the string
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

        System.out.println("Your name : "+name);

        System.out.println("Length of string is : "+name.length());

        char str = name.toCharArray();      //converts string to character array

        for(int iCnt = 0; iCnt < str.length; iCnt++)
        {
            System.out.println(str[iCnt]);   
        }
    }
}