import java.io.*;
import java.util.*;

class program449
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
     System.out.println("file is already exists");
     }
     else
     {
     bret=fobj.createNewFile();

     if(bret == true)
     {
        System.out.println("File successfully created");

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