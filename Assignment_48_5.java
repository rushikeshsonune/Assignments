// 48.5   write a java program which accepts N numbers from user and display all such elements which are multiple of 11.
//  N : 6
//      85  66  3   55  93  88

// Output : 66   55    88

import java.lang.*;
import java.util.*;

class Assignment_48_5
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

       ArrayDemo(arr);

    }

    public static void ArrayDemo(int Arr[])
    {

        for(int i=0;i<Arr.length;i++)
        {
            if((Arr[i] % 11) == 0)
            {
                System.out.print(Arr[i] +"  ");  
            }
            
        }
    }
}