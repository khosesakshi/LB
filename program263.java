import java.util.*;

class ArrayX
{
  public int Arr[];

  public ArrayX(int iSize)
  {
    Arr = new int[iSize];
  }
  public void Accept()
  {
    int i = 0;
    Scanner sobj = new Scanner(System.in);

    System.out.println("enter the elements:");
    for(i = 0; i < Arr.length ; i++)            
    {
       Arr[i] = sobj.nextInt();
    }
  }
  public void Display()
  {
    int i =0;
    System.out.println("Elements of the array are:");
    for(i = 0; i < Arr.length; i++)
    {
       System.out.println(Arr[i]);
    }
  }
  public int Maximum()
  { 
    int i = 0, iMax = Arr[0];
    for(i =0 ;i <Arr.length;i++)
    {
        if(Arr[i] > iMax)
        {
    iMax = Arr[i];
    }
}
    return iMax;
  }

}

class program263
{
   public static void main(String A[])
   {
    Scanner sobj = new Scanner(System.in);
    int iLength = 0,i = 0,iRet = 0;

    System.out.println("enter the number of elements:");  
    iLength = sobj.nextInt();

    ArrayX aobj = new ArrayX(iLength);

    aobj.Accept();
    aobj.Display();
    iRet = aobj.Maximum();

    System.out.println("Summation of all elements:"+iRet);
   }
    
}
