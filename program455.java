import java.io.*;
import java.util.*;

class program455
{
    public static void main(String A[]) throws Exception
    {
    try
    {
    boolean bret = false;
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the filename that u want to open");
    String name = sobj.nextLine();

     File fobj = new File(name);

     if(fobj.exists())
     {
     System.out.println("File name is:"+fobj.getName());
     System.out.println("File size is:"+fobj.length());
     }
     else
     {
        System.out.println("There is no such file");
     }
    }
    catch(Exception eobj)
        {
            System.out.println("Exception occured.."+eobj);
        }
    }
}