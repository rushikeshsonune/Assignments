// 49.4  Write a java program which accept number from user and return the multiplication of all Digits.

// Input :  2395
// Output : 270

import java.lang.*;
import java.util.*;

class Assignment_49_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number");
        int no = sobj.nextInt();

        int iret = Multiply(no);

        System.out.println("Multiplication of Digits is : "+iret);

    }

    public static int Multiply(int iNo)
    {
       int iMult = 1;

       while(iNo != 0)
       {

         int iDigit = iNo % 10;
         
         if(iDigit == 0)
         {
            iDigit = 1;
         }
         
         iMult = iMult * iDigit;

         iNo = iNo / 10;
       }

       return iMult;
    }
}