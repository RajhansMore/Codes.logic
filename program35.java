//write program to print the name and sizze of files in a directory
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
                for(int i = 0; i< list.length; i++)
                {
                    System.out.print("\nFile name:"+list[i].getName()+"\tFile size:"+list[i].length());
                }
            }
        }
        catch(Exception iobj)
        {
            System.out.println("exception occured : "+iobj);

        }

    }
}