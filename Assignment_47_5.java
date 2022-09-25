//  47.5   Write a java program which accepts string from user and Display String in reverse order.
//         

// Input : "MarvellouS"
// Output : "SuollevraM"

import java.lang.*;
import java.util.*;

class Assignment_47_5
{
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter String");
       String str = sobj.nextLine();

       ChkVowel(str);

    }

    public static void ChkVowel(String Str)
    {
      
      char Arr[] = Str.toCharArray();

      int x = Arr.length-1;

      for(int i=0;i < (Arr.length);i++)
      {
         if(i < x)
         {
             char temp = Arr[i];
             Arr[i] = Arr[x];
             Arr[x] = temp;
         }
         x--;
      }
      
      String newStr =  new String(Arr);

      System.out.println("Reverse String is " + newStr);
      
    } 
}