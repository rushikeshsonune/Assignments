// 46.3  write a proogram which accept n matrix from user and Reverse the contents of each Column.
//    
//
//  Input :
//  3      2      5      9
//  4      3      2      2
//  8      4      1      9
//  3      9      7      5
// 
//  3  9  7  5
//  8  4  1  9
//  4  3  2  2
//  3  2  5  9 


import java.lang.*;
import java.util.*;

class Assignment_46_3
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
      
      ReverseCol(arr,rows,Cols);

    }

    public static void ReverseCol(int Arr[][],int iRow,int iCol)
    { 
        int x = Arr.length-1; 

        for(int i=0;i<(Arr.length)/2;i++)
        {

            for(int j=0;j<Arr[i].length;j++)
            {
                if(i < x)
                {
                    int temp = Arr[x][j];
                    Arr[x][j] = Arr[i][j];
                    Arr[i][j] = temp;
                }
                 
            }
            x--;
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
