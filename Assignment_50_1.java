// 50.1 Write a java program which accepts N number from user and accept one another number and check whether number is present or not.
// Input :  N  6
//          NO  66
//              85  66  3  66  93  88
//Output :  True

import java.lang.*;
import java.text.BreakIterator;
import java.util.*;

class Assignment_50_1
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

        System.out.println("Enter Number to search");
        int NO = sobj.nextInt();

        boolean bRet = Check(arr,NO);

        if(bRet == true)
        {
           System.out.println("True");  
        }
        else
        {
           System.out.println("False");
        }
    }

    public static boolean Check(int Arr[],int iNo)
    {
       for(int i=0;i<Arr.length;i++)
       {
          if(Arr[i] == iNo)
          {
            return true;
          }
       }

       return false;
    }
}