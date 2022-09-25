//  47.3   Write a java program which accepts string from user and 
//         return difference between frequency of Small characters and frequency of Capital characters.

// Input : "Marvellous"
// Output : (9-1) = 8 

import java.lang.*;
import java.util.*;

class Assignment_47_3
{
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter String");
       String str = sobj.nextLine();

       int iRet = CountDiff(str);

       System.out.println("Difference is : "+iRet);
    }

    public static int CountDiff(String Str)
    {
      char Arr[] = Str.toCharArray();

      int iSmall = 0;
      int iCapital = 0;

      for(int i=0;i < Arr.length;i++)
      {
         if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
         {
           iSmall++;
         }
         else if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
         {
           iCapital++;
         }
      }

      return iSmall - iCapital;
    } 
}