import java.util.*;

class Numbers
{
    public int EvenFactors(int iNo)
    {
    int iSum = 0,iCnt = 0;

    if(iNo % 2 != 0)
    {
        return 0;
    }
    
    for(iCnt = 2;iCnt <= iNo/2 ;iCnt = iCnt+2)  //iCnt+=2
    {
      if(iNo % iCnt == 0)
      {
        iSum = iSum + iCnt;
      }
    }
    return iSum;
    }
}

class program240
{
   public static void main(String A[])
   {
     Scanner sobj = new Scanner(System.in);
     int iValue = 0,iRet = 0;

     System.out.println("enter the number:");
     iValue = sobj.nextInt();

     Numbers nobj = new Numbers();
     iRet = nobj.EvenFactors(iValue);

     System.out.println("Addition of even factors:"+iRet);
   }
}

