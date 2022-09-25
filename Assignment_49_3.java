// 49.3  Write a java program which accept number from user and return the Count of Digits in between 3 and 7.

// Input :  2395
// Output : 1

import java.lang.*;
import java.util.*;

class Assignment_49_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number");
        int no = sobj.nextInt();

        int iret = CountRange(no);

        System.out.println("Count of Digits is :"+iret);

    }

    public static int CountRange(int iNo)
    {
       int iCnt = 0;

       while(iNo != 0)
       {

         int iDigit = iNo % 10;
         
         if((iDigit > 3) && (iDigit < 7))
         {
           iCnt++;
         }

         iNo = iNo / 10;
       }

       return iCnt;
    }
}