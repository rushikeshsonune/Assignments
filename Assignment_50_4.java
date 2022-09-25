// 50.4  Write a java program which accepts N numbers from user and accept Range,Display all elements from that Range.. 
// Input :  N  :  6
//          start :  60
//          End :    90
//                85  66  3  66  93  88
//Output :  85  66  66  88                                                                                                       

import java.lang.*;
import java.util.*;

class Assignment_50_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Size");
        int iSize = sobj.nextInt();

        int arr[] = new int[iSize];

        System.out.println("Enter Numbers");
        for(int i=0;i<arr.length;i++)
        {
             arr[i] = sobj.nextInt();
        }

        System.out.println("Enter Start of range");
        int start = sobj.nextInt();

        System.out.println("Enter End of range");
        int end = sobj.nextInt();

        Display(arr,start,end);
 
    }

    public static void Display(int Arr[],int Start,int End)
    {
       for(int i=0;i<Arr.length;i++)
       {
          if((Arr[i] > Start) && (Arr[i] < End))
          {
             System.out.print(Arr[i] +" ");
          }
       }
    }
}