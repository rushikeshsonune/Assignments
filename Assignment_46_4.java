// 46.4  write a proogram which accept n matrix from user and check matrix is identity or not.
//       
//
//  Input :
//  1   0   0   0
//  0   1   0   0
//  0   0   1   0
//  0   0   0   1
// 
// Output : true.


import java.lang.*;
import java.util.*;

class Assignment_46_4
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
      
      boolean bRet = ChkIdentity(arr,rows,Cols);

      if(bRet == true)
      {
        System.out.println("matrix is Identity matrix");
      }
      else
      {
        System.out.println("matrix is Not Identity matrix");
      }

    }

    public static boolean ChkIdentity(int Arr[][],int iRow,int iCol)
    {
        for(int i=0;i<Arr.length;i++)
        {
            for(int j=0;j<Arr[i].length;j++)
            {
               if(i == j)
               {
                 if(Arr[i][j] != 1)
                 {
                   return false;
                   //break; 
                 }
               } 
               else if(Arr[i][j] != 0)
               {
                 return false;
                 //break;
               } 
            }
        } 
        
        return true;
        
    }
}
