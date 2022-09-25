//  47.1   Write a java program which accepts string from user and count capital characters.

// Input : "Marvellous Multi OS"
// Output : 4

import java.lang.*;
import java.util.*;

class Assignment_47_1
{
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter String");
       String str = sobj.nextLine();

       int iRet = CountCapital(str);

       System.out.println("Count of Capital Characters is : "+iRet);
    }

    public static int CountCapital(String Str)
    {
      char Arr[] = Str.toCharArray();

      int iCnt = 0;

      for(int i=0;i < Arr.length;i++)
      {
         if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
         {
           iCnt++;
         }
      }

      return iCnt;
    } 
}