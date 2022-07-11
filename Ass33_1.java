// 33.1  WAP which accepts one number from user and Count number of ON(1) bits in it without using % and / opertaor. 

import java.lang.*;
import java.util.*;

class Bitwise
{
  public int CountOne(int iNo)
  {
    int iResult = 0;
    int iCnt = 0;

    int imask = 0x00000001;

    for(int i=1;i<=32;i++)
    {
      iResult = iNo & imask;
      
      if(iResult != 0)
      {
        iCnt++;
      }

      imask = imask << 1;

    }

    return iCnt;
  }
}

class Ass33_1
{
  public static void main(String args[])
  {
    Scanner sobj = new Scanner(System.in);

    Bitwise bobj = new Bitwise();

    System.out.println("Enter number");
    int value = sobj.nextInt();

    int Ret = bobj.CountOne(value);

    System.out.println("ON bits are :"+Ret);

  }
}
