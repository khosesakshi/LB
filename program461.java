import java.io.*;
import java.util.*;

class program461
{
    public static void main(String A[]) throws Exception
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("enter the name of source file:");
       String src = sobj.nextLine();

       System.out.println("enter the name of destination file:");
       String dest = sobj.nextLine();

       File fsrc = new File(src);
       File fdest = new File(dest);

       if(fdest.exists())
       {
        System.out.println("Destination file is already present:");
        System.out.println("unable to copy:");
        return;
       }
       else
       {
         fdest.createNewFile();

         if(!fsrc.exists())
         {
            System.out.println("source dile is missing:");
            System.out.println("Unable to copy:");
         }
         FileInputStream fiobj = new FileInputStream(fsrc);
         FileOutputStream foobj = new FileOutputStream(fdest);

       }
    }
}