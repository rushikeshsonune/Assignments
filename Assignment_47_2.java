//  47.2   Write a java program which accepts string from user and count Small characters.

// Input : "Marvellous"
// Output : 9

import java.lang.*;
import java.util.*;

class Assignment_47_2
{
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter String");
       String str = sobj.nextLine();

       int iRet = CountSmall(str);

       System.out.println("Count of Small Characters is : "+iRet);
    }

    public static int CountSmall(String Str)
    {
      char Arr[] = Str.toCharArray();

      int iCnt = 0;

      for(int i=0;i < Arr.length;i++)
      {
         if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
         {
           iCnt++;
         }
      }

      return iCnt;
    } 
}