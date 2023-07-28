/*accept string from user and display the 
as well as length of string
*/

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

    }
}