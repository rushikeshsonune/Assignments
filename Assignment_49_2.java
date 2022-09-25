// 49.2  Write a java program which accept number from user and return the Count of Odd Digits.

// Input :  2395
// Output : 3

import java.lang.*;
import java.util.*;

class Assignment_49_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number");
        int no = sobj.nextInt();

        int iret = CountOdd(no);

        System.out.println("Count of Odd Digits is :"+iret);

    }

    public static int CountOdd(int iNo)
    {
       int iCnt = 0;

       while(iNo != 0)
       {

         int iDigit = iNo % 10;
         if((iDigit % 2) != 0)
         {
           iCnt++;
         }

         iNo = iNo / 10;
       }

       return iCnt;
    }
}