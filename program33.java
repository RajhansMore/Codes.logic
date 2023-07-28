//write program to see if its a directory or not
import java.util.*;
import java.io.*;

class Program29
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);
        try
        {
            boolean bRet = fobj.isDirectory();
            if(bRet == true)
            {
                System.out.println("Itsa a directory");
            }
            else
            {
                System.out.println("Its not a directory");

            }
        }
        catch(Exception iobj)
        {
            System.out.println("exception occured : "+iobj);

        }

    }
}