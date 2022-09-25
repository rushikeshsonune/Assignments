//  47.4   Write a java program which accepts string from user and check whether it contains vowels in it or not.
//         

// Input : "Marvellous"
// Output : True

import java.lang.*;
import java.util.*;

class Assignment_47_4
{
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter String");
       String str = sobj.nextLine();

       boolean bret = ChkVowel(str);

       if(bret == true)
       {
         System.out.println("String contains Vowels");
       }
       else
       {
        System.out.println("String Not contains Vowels");
       }

    }

    public static boolean ChkVowel(String Str)
    {
      char Arr[] = Str.toCharArray();

      for(int i=0;i < Arr.length;i++)
      {
        if((Arr[i] == 'a') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') || (Arr[i] == 'u') ||
           (Arr[i] == 'A') || (Arr[i] == 'E') || (Arr[i] == 'I') || (Arr[i] == 'O') || (Arr[i] == 'U')) 
           {
             return true;
           } 
      }
      return false;
    } 
}