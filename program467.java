import java.io.*;
import java.util.*;

class program467
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

        File Arr[] = fobj.listFiles();

        System.out.println("Number of files in directory are:"+Arr.length);
        
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
       }
       else
       {
        System.out.println("There is no such directory:");
       }
       
    }
}