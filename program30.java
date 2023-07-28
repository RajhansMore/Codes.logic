//write program to check the created file already exists or not
import java.util.*;
import java.io.*;

class Program29
{
    public static void main(String arg[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name that you want to check");
        String FileName = sobj.nextLine();

        try
        {
            File fobj = new File(FileName);
            boolean bRet = fobj.exists();

            if(bRet == true)
            {
                System.out.println("File is existing");
            }
            else
            {
                System.out.println("there is no such file");
            }
        }
        catch(Exception iobj)
        {
            System.out.println("exception occured : "+iobj);

        }

    }
}