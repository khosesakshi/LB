import java.util.*;

class ArrayX
{
  public int Arr[];

  public ArrayX(int iSize)
  {
    Arr = new int[iSize];
  }

}

class program257
{
   public static void main(String A[])
   {
    Scanner sobj = new Scanner(System.in);
    int iLength = 0,i = 0;

    System.out.println("enter the number of elements:");  
    iLength = sobj.nextInt();

    ArrayX aobj = new ArrayX(iLength);
   }
    
}
