import java.io.*;

class program446
{
    public static void main(String A[]) throws Exception
    {
    try
    {
     File fobj = new File("Demo.txt");
     fobj.createNewFile();
    }
    catch(Exception eobj)
        {
            System.out.println("Exception occured.."+eobj);
        }
    }
}