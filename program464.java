import java.io.*;
import java.util.*;

class program464
{
    public static void main(String A[]) throws Exception
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("enter the name of directory that u want to open:");
       String DirName = sobj.nextLine();

       File fobj = new File(DirName);

       if(fobj.exists())
       {
        System.out.println("Directory is present:");
       }
       else
       {
        System.out.println("There is no such directory:");
       }
       
    }
}
       