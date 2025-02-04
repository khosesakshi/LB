import java.io.*;

class program447
{
    public static void main(String A[]) throws Exception
    {
    try
    {
        boolean bret = false;

     File fobj = new File("Demo.txt");

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
    catch(Exception eobj)
        {
            System.out.println("Exception occured.."+eobj);
        }
    }
}