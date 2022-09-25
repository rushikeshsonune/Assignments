// 48.1   write a java program which accepts N number from user and return difference between Summation of even and Summation of odd elements.
//  N : 6
//      85  66  3   80  93  88

// Output : 53

import java.lang.*;
import java.util.*;

class Assignment_48_1
{
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter size");
       int size = sobj.nextInt();

       int arr[] = new int[size];

       System.out.println("Enter Numbers");
       for(int i=0;i<arr.length;i++)
       {
         arr[i] = sobj.nextInt();
       }

       int iret = ArrayDemo(arr);

       System.out.println("difference between Summation of even and Summation of odd elements is : "+iret);
    }

    public static int ArrayDemo(int Arr[])
    {
        int iEven = 0;
        int iOdd = 0;

        for(int i=0;i<Arr.length;i++)
        {
            if((Arr[i] % 2) == 0)
            {
              iEven = iEven + Arr[i];
            }
            else
            {
              iOdd = iOdd + Arr[i];
            }
        }

        return iEven-iOdd;
    }
}