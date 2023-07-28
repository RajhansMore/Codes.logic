//write program to see if its a directory 
//if yes lists all files in it
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
                File list[] = fobj.listFiles();
                System.out.println("Number of files in that directory are:"+list.length);
            }
        }
        catch(Exception iobj)
        {
            System.out.println("exception occured : "+iobj);

        }

    }
}