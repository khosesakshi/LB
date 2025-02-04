import java.util.*;

class program229
{
    public static void main(String A[])
    {
        int No1 = 0,No2 = 0,Ans = 0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter fiest number:");
        No1 = sobj.nextInt();

        System.out.println("Enter the secod number:");
        No2 = sobj.nextInt();

        Ans =  No1 + No2;

        System.out.println("Addition is :"+Ans);
    }
}

/*
    nextInt()       int
    nextFloat()     float
    nextDouble()    double
    nextBoolean()   booleabn
    nextLine()      string
   
 */