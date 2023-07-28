//write program to show the name of file
import java.util.*;
import java.io.*;

class Program29
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name the you want to see");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);
            string name = fobj.getName();

            
            System.out.println("file name is:"+name);            
        }
        catch(Exception iobj)
        {
            System.out.println("exception occured : "+iobj);

        }

    }
}