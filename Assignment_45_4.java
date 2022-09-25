// 45.4  write a proogram which accept n matrix from user and Display addition of elements from each column
//
//  3      2      5      9
//  4      3      2      2
//  8      4      1      9
//  3      9      7      5
//  
// Output :  18    18    15    25 

import java.lang.*;
import java.util.*;

class Assignment_45_4
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
      
      AddColumn(arr,rows,Cols);

    }

    public static void AddColumn(int Arr[][],int iRow,int iCol)
    {
       int iSum = 0;

       for(int iCnt=0;iCnt<=iCol;iCnt++)
       {
          for(int i=0;i<Arr.length;i++)
          {
             for(int j=0;j<Arr[i].length;j++)
             {
                  if(j == iCnt)
                  {
                    iSum = iSum + Arr[i][j];
                  }  
             }
          }

          System.out.println("Addition of " +iCnt+1 +"st Column is : "+iSum); 
          iSum = 0;       
       }
    }
}
