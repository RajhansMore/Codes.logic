//write program to show the length of file
import java.util.*;
import java.io.*;

class Program29
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name:");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);
            
            System.out.println("file length is:"+fobj.length());            
        }
        catch(Exception iobj)
        {
            System.out.println("exception occured : "+iobj);

        }

    }
}