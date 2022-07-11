// 33.2  WAP which accepts two numbers from user and Display common on bits . 

import java.lang.*;
import java.util.*;

class Bitwise
{
  public void CountOne(int iNo1,int iNo2)
  {
    int iResult = 0;
    int mask = 0x00000001;

    for(int i=1;i<=32;i++)
    {
      iResult = iNo1 & iNo2 & mask;

      if(iResult != 0)
      {
        System.out.print(i +" ");
      }
     
      mask = mask << 1;

    }

  }
}

class Ass33_2
{
  public static void main(String args[])
  {
    Scanner sobj = new Scanner(System.in);

    Bitwise bobj = new Bitwise();

    System.out.println("Enter first number");
    int value1 = sobj.nextInt();

    System.out.println("Enter Second number");
    int value2 = sobj.nextInt();

    bobj.CountOne(value1,value2);

    

  }
}
