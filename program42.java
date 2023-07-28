//unpacking
import java.util.*;
import java.io.*;

class program42
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        byte Header[] = new byte[100];

        System.out.println("------------------Marvellour packer UnPacker------------------");
        System.out.println("Unpacking activity of the application started");

        System.out.println("Enter the file name which contains the packed data");
        String PackFile = sobj.nextLine();
        try
        {
            File Packobj = new File(PackFile);

            FileInputStream inobj = new FileInputStream(Packobj);

            inobj.read(Header,0,100);

            String Headerstr = new String(Header);

            System.out.println(Headerstr);

            String Tokens[];
            Tokens = Headerstr.split(" ");

            System.out.println("File name :"+Tokens[0]);
            System.out.println("File length :"+Tokens[1]);

            File newFileobj = new File(Tokens[0]);
            newFileobj.createNewFile();

            FileOutputStream outobj = new FileOutputStream(newFileobj);
            int FileSize = Integer.parseInt(Tokens[0]);

            byte Buffer[] = new byte [FileSize];
            inobj.read(Buffer,0,FileSize);
        }
        catch(Exception obj) 
        {
            System.out.println("Exception occured : "+obj);
        }
    }   
}