// 45.1  write a proogram which accept n matrix from user and return addition of diagonal elements
//
//  3      2      5      9
//  4      3      2      2
//  8      4      1      5
//  3      9      7      5
//  
// Output : 12

import java.lang.*;
import java.util.*;

class Assignment_45_1
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
      }
      
      int iRet = AddDiagonal(arr,rows,Cols);

      System.out.println("Addition of Diagonal is "+iRet);
    }

    public static int AddDiagonal(int Arr[][],int iRow,int iCol)
    {
       int iSum = 0;

        for(int i=0;i<Arr.length;i++)
        {
           for(int j=0;j<Arr[i].length;j++)
           {
               if(i == j)
               {
                 iSum = iSum +Arr[i][j];
               }
           }
        }

        return iSum;
    }
}
