// 45.2  write a proogram which accept n matrix and one number from user and return frequency of that number.
//
//  3      2      5      9
//  4      3      2      2
//  8      4      1      5
//  3      9      7      5
//  Input : 9
// Output : 3

import java.lang.*;
import java.util.*;

class Assignment_45_2
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

      System.out.println("Enter the number to search");
      int no = sobj.nextInt();
      
      int iRet = Frequency(arr,rows,Cols,no);

      System.out.println("Frequency of number is "+iRet);
    }

    public static int Frequency(int Arr[][],int iRow,int iCol,int iNo)
    {
       int iCnt = 0;

        for(int i=0;i<Arr.length;i++)
        {
           for(int j=0;j<Arr[i].length;j++)
           {
               if(Arr[i][j] == iNo)
               {
                  iCnt++;
               }
           }
        }

        return iCnt;
    }
}
