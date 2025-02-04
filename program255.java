import java.util.*;

class program255
{
   public static void main(String A[])
   {
     Scanner sobj = new Scanner(System.in);
     int iSize = 0,i = 0;

     System.out.println("enter the number of elements:");   //step 1
     iSize = sobj.nextInt();
     
     int Arr[] = new int[iSize];                  //step 2

     System.out.println("enter the elements:");   //step 3
     for(i = 0; i < iSize ; i++)            
     {
        Arr[i] = sobj.nextInt();
     }
                                                      // logic step 4
     System.out.println("Elements of the array are:");
     for(i = 0; i < iSize; i++)
     {
        System.out.println(Arr[i]);
    }
                                                       // deallocation step 5
   }
    
}
