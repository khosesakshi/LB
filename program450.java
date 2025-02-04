import java.io.*;
import java.util.*;

class program450
{
    public static void main(String A[]) throws Exception
    {
    try
    {
    boolean bret = false;
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the filename that u want to craete");
    String name = sobj.nextLine();

     File fobj = new File(name);

     if(fobj.exists())
     {
     System.out.println("file is already exists in the folder");
     }
     else
     {
     bret=fobj.createNewFile();

        if(bret == true)
        {
        System.out.println("File successfully created");

        FileOutputStream foobj = new FileOutputStream(fobj);

        foobj.write("Jay Ganesh...");
        }
        else
        {
        System.out.println("unable to create the file");
        }
     }
    }
    catch(Exception eobj)
        {
            System.out.println("Exception occured.."+eobj);
        }
    }
}