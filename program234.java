import java.util.*;

class Reactangle
{

    public int CalculateArea(int A,int B)
    {
       float fResult = 0.0f;

       fResult = A * B;
       return fResult;
    }
}

class program233
{
   
    public static void main(String A[])
    {
        int iNo1 = 0, iNo2 = 0;
        float fAns = 0.0f;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter length:");
        iNo1 = sobj.nextInt();

        System.out.println("Enter breadth :");
        iNo2 = sobj.nextInt();
        
        Calculations cobj = new Reactangle();
        fAns = cobj.CalculateArea(iNo1,iNo2);

        System.out.println("Area is :"+fAns);
    }
}