import java.util.*;

class Arithematic
{

    public int Power(int A,int B)
    {
       int iCnt = 0;
       int iMult = 1;
       
       for(iCnt = 1;iCnt <= B; iCnt++)
       {
          iMult = iMult * A;
       }
       return iMult;
    }
}

class program236
{
   
    public static void main(String A[])
    {
        int iNo1 = 0, iNo2 = 0;
        int iAns = 0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter base:");
        iNo1 = sobj.nextInt();

        System.out.println("Enter index :");
        iNo2 = sobj.nextInt();
        
        Arithematic cobj = new Arithematic();
        iAns = cobj.Power(iNo1,iNo2);

        System.out.println("Result is :"+iAns);
    }
}

/* A= 10
 * B = 5

 * 10*10*10*10*
 * 
 * Ans = Ans * 10;
 * Ans = Ans * 10;
 * Ans = Ans * 10;
 * Ans = Ans * 10;
  Ans = Ans * 10;
 
 */