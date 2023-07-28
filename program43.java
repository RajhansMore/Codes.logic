//unpacking
import java.util.*;
import java.io.*;

class program42
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        byte Header[] = new byte[100];
        int iRet = 0;
        String Headerstr;
        String Tokens[];

        System.out.println("------------------Marvellour packer UnPacker------------------");
        System.out.println("Unpacking activity of the application started");

        System.out.println("Enter the file name which contains the packed data");
        String PackFile = sobj.nextLine();
        try
        {
            File Packobj = new File(PackFile);
            FileInputStream inobj = new FileInputStream(Packobj);

            while((inobj.read(Header,0,100)) > 0)
            {
                Headerstr = new String(Header);

                System.out.println(Headerstr);
                
                Tokens = Headerstr.split(" ");

                File newFileobj = new File(Tokens[0]);
                newFileobj.createNewFile();

                FileOutputStream outobj = new FileOutputStream(newFileobj);
                int FileSize = Integer.parseInt(Tokens[0]);

                byte Buffer[] = new byte [FileSize];
                inobj.read(Buffer,0,FileSize);
                outobj.write(Buffer,0,FileSize);7
            }
        }
        catch(Exception obj) 
        {
            System.out.println("Exception occured : "+obj);
        }
    }   
}