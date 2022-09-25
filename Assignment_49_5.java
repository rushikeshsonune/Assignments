// 49.5  Write a java program which accept number from user and return difference of the Summation of even Digits and Summation of odd digits.

// Input :  2395
// Output : -15 ( 2 - 17)

import java.lang.*;
import java.util.*;

class Assignment_49_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number");
        int no = sobj.nextInt();

        int iret = CountDiff(no);

        System.out.println("Difference of Summation of Even and Odd Digits is : "+iret);

    }

    public static int CountDiff(int iNo)
    {
       int iEvenSum = 0;
       int iOddSum = 0;

       while(iNo != 0)
       {

         int iDigit = iNo % 10;
         
         if((iDigit % 2) == 0)
         {
            iEvenSum = iEvenSum + iDigit;
         }
         else if((iDigit % 2) != 0)
         {
            iOddSum = iOddSum + iDigit;
         }

         iNo = iNo / 10;
       }

       return iEvenSum - iOddSum;
    }
}