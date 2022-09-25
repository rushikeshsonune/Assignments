// 46.5  write a proogram which accept n matrix from user and check matrix is Sparse or not.
//       (Sparse matrix is matrix with majority of its elements are equal to zero.)
//
//  Input :
//  1   0   3   0
//  0   6   0   0
//  0   0   1   0
//  9   0   0   9
// 
// Output : true.


import java.lang.*;
import java.util.*;

class Assignment_46_5
{
    public static void main(String arg[])
    {
      Scanner sobj = new Scanner(System.in);
      
      System.out.println("Enter number of Rows");
      int rows = sobj.nextInt();

      System.out.println("Enter number of Columns");
      int Cols = sobj.nextInt();

      int arr[][] = new int[rows][Cols];

      System.out.println("Enter the Values");
      for(int i=0;i<arr.length;i++)
      {
        for(int j=0;j<arr[i].length;j++)
        {
           arr[i][j] = sobj.nextInt();  
        }
        System.out.println();
      }
      
      int iRet = ChkSparse(arr,rows,Cols);

      if(iRet > (rows*Cols/2))
      {
        System.out.println("matrix is Sparse matrix");
      }
      else
      {
        System.out.println("matrix is Not Sparse matrix");
      }

    }

    public static int ChkSparse(int Arr[][],int iRow,int iCol)
    {
        int iCnt = 0;

        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
               if(Arr[i][j] == 0)
               {
                 iCnt++;
               }
            }
        } 
        
        return iCnt;
        
    }
}
