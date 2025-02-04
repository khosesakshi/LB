//883042
//0 : 1
//1 : 1
//2 : 1;
//3 : 1
import java.util.*;

class Digits
{
    public void CountDigits(int iNo)
    {
      int iCount = 0,iDigit = 0;

      while(iNo != 0)
      {
        iDigit = iNo % 10;
        if(iDigit == 5)
        {
            iCount++;
        }
        iNo = iNo / 10;
      }
      System.out.println("Frequency of 5 is :"+iCount);
      }
    }


class program245
{
   public static void main(String A[])
   {
     Scanner sobj = new Scanner(System.in);
     int iValue = 0;

     System.out.println("enter the number:");
     iValue = sobj.nextInt();

     Digits dobj = new Digits();
     dobj.CountDigits(iValue);

   }
}

