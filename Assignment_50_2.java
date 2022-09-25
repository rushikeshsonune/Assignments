// 50.2 Write a java program which accepts N number from user and accept one another number NO and return first occurence of that NO. 
// Input :  N  :  6
//          NO :  66
//                85  66  3  66  93  88
//Output :  1

import java.lang.*;
import java.text.BreakIterator;
import java.util.*;

class Assignment_50_2
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

        int iRet = FirstOcc(arr,NO);

        if(iRet == -1)
        {
            System.out.println("Number not present");   
        }
        else
        {
            System.out.println("First Occurence of Number is : "+iRet);
        }
 
    }

    public static int FirstOcc(int Arr[],int iNo)
    {
       for(int i=0;i<Arr.length;i++)
       {
          if(Arr[i] == iNo)
          {
            return i;
          }
       }
       
       return -1;
    }
}