// 50.5  Write a java program which accepts N numbers from user and return product of all odd elements.
// Input :  N  :  6
//                15  66  3  66  93  88
//Output :                                                                                                       

import java.lang.*;
import java.util.*;

class Assignment_50_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size");
        int iSize = sobj.nextInt();

        int arr[] = new int[iSize];

        System.out.println("Enter Numbers");
        for(int i=0;i<arr.length;i++)
        {
             arr[i] = sobj.nextInt();
        }

        int iRet = Product(arr);

        System.out.println("Product of Odd elements is : "+iRet);
 
    }

    public static int Product(int Arr[])
    {
       int iMax = 1;

       for(int i=0;i<Arr.length;i++)
       {
          if((Arr[i] % 2) != 0)
          {
            iMax = iMax * Arr[i];
          }
       }

       return iMax;
    }
}