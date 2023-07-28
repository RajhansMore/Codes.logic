/*accept string from user and display the string
letter by letter*/

//APPROACH 1

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

        for(int iCnt = 0; iCnt < name.length(); iCnt++)
        {
            System.out.println(name.charAt(iCnt));   
        }
    }
}