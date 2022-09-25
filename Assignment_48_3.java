// 48.3   write a java program which accepts N numbers from user and display all such elements which are Even and divisible by 5.
//  N : 6
//      85  66  3   80  93  88

// Output : 80

import java.lang.*;
import java.util.*;

class Assignment_48_3
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

       Display(arr);

    }

    public static void Display(int Arr[])
    {

        for(int i=0;i<Arr.length;i++)
        {
            if((((Arr[i] % 5) == 0) && (Arr[i] % 2) == 0))
            {
                System.out.println(Arr[i] +"  ");  
            }
            
        }

    }
}