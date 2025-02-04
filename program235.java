import java.util.*;

class Reactangle
{

    public int CalculateArea(int A,int B)
    {
       float fArea = 0.0f;

       fArea = A * B;
       return fArea;
    }
}

class program235
{
   
    public static void main(String A[])
    {
        float fNo1 = 0.0f, fNo2 = 0.0f;
        float fAns = 0.0f;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter length:");
        fNo1 = sobj.nextFloat();

        System.out.println("Enter breadth :");
        fNo2 = sobj.nextFloat();
        
        Reactangle cobj = new Reactangle();
        fAns = cobj.CalculateArea(fNo1,fNo2);

        System.out.println("Area is :"+fAns);
    }
}