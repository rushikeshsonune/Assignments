// 46.2  write a proogram which accept n matrix from user and Reverse the contents of each row.
//    
//
//  Input :
//  3      2      5      9
//  4      3      2      2
//  8      4      1      9
//  3      9      7      5
//  
// Output : 
// 9      5      2      3
// 2      2      3      4
// 9      1      4      8
// 5      7      9      3


import java.lang.*;
import java.util.*;

class Assignment_46_2
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
      
      ReverseRow(arr,rows,Cols);

    }

    public static void ReverseRow(int Arr[][],int iRow,int iCol)
    { 
        for(int i=0;i<Arr.length;i++)
        {
            int x = Arr[i].length-1;

            for(int j=0;j<(Arr[i].length)/2;j++)
            {
                if(j < x)
                {
                    int temp = Arr[i][x];
                    Arr[i][x] = Arr[i][j];
                    Arr[i][j] = temp;
                    x--; 
                }
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
