// 45.3  write a proogram which accept n matrix from user and return largest number from both diagonals
//
//  3      2      5      9
//  4      3      2      2
//  8      4      1      5
//  3      9      7      5
//  
// Output : 

import java.lang.*;
import java.util.*;

import javax.imageio.ImageIO;

class Assignment_45_3
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

      System.out.println("Maximum number is "+iRet);
    }

    public static int AddDiagonal(int Arr[][],int iRow,int iCol)
    {
       int iMax = 0;

        for(int i=0;i<Arr.length;i++)
        {
           for(int j=0;j<Arr[i].length;j++)
           {
               if(i == j)
               {
                 if(Arr[i][j] > iMax)
                 {
                    iMax = Arr[i][j];
                 } 
               }
           }
        }

        return iMax;
    }
}
