// 45.5  write a proogram which accept n matrix from user and swap the contents of consecutive rows

// Input :
//  3      2      5      9
//  4      3      2      2
//  8      4      1      9
//  3      9      7      5

// Output :  
//  4      3      2      2
//  3      2      5      9
//  3      9      7      5
//  8      4      1      9

import java.lang.*;
import java.util.*;

class Assignment_45_5
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
      
      SwapRows(arr,rows,Cols);

    }

    public static void SwapRows(int Arr[][],int iRow,int iCol)
    {
       int iTemp = 0;

       for(int i=0;i<iRow-1;i+=2)
       {
         for(int j=0;j<iCol;j++)
         {
             iTemp = Arr[i][j];
             Arr[i][j] = Arr[i+1][j];
             Arr[i+1][j] = iTemp;
         }
       }

        for(int i=0;i<Arr.length;i++)
        {
           for(int j=0;j<Arr[i].length;j++)
           {
              System.out.print(Arr[i][j] +" ");  
           }
           System.out.println();
        }

    }
}
