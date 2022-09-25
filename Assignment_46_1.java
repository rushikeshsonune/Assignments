
import java.lang.*;
import java.util.*;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

   public Matrix(int a,int b)
   {
      this.iRow = a;
      this.iCol = b;
      
      Arr = new int[iRow][iCol];
   }

   protected void finalize() 
   {
      Arr = null;
      System.gc();
   }

   public void Accept()
   {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the data");
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
   }

   public void Display()
   { 
     System.out.println("Elements of Array are :");
     for(int i=0;i<Arr.length;i++)
     {
        for(int j=0;j<Arr[i].length;j++)
        {
            System.out.print(Arr[i][j] +"  ");
        }
        System.out.println();
     }
   }
}

class MyMatrix extends Matrix
{
   public MyMatrix(int a,int b)
   {
     super(a,b);
   }

   public void SwapCol()
   {
     int iTemp = 0;

      for(int i=0;i<iRow;i++)
      {
        for(int j=0;j<iCol-1;j+=2)
        {
            iTemp = Arr[i][j];
            Arr[i][j] = Arr[i][j+1];
            Arr[i][j+1] = iTemp;
        }
      }
   }
}

class Assignment_46_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows");
        int X = sobj.nextInt();

        System.out.println("Enter number of Columns");
        int Y = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(X,Y);

        mobj.Accept();

        mobj.SwapCol();

        System.out.println("Data After Swapping is : ");
        mobj.Display();

    }
}
