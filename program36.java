//write program to create string
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
        String Header = null;
        try
        {
            boolean bRet = fobj.isDirectory();
            if(bRet == true)
            {
                File list[] = fobj.listFiles();
                for(int i = 0; i< list.length; i++)
                {
                    Header = list[i].getName() + " "+list[i].length();
                    System.out.println(Header);
                }
            }
        }
        catch(Exception iobj)
        {
            System.out.println("exception occured : "+iobj);

        }

    }
}