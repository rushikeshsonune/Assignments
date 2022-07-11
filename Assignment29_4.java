// 29.4   wap and which checks whether 7th, 8th and 9th bit is ON or OFF.

import java.lang.*;
import java.util.*;

class Bitwise
{
  public boolean Chkbit(int iNo)
  {
    int iResult = 0;

    int iMask = 0x000001c0; //  448          //0000 0000 0000 0000 0000 0001 1100 0000
                                         //      0    0    0    0    0    1    c   0
    iResult = iNo & iMask;

    if(iResult == 0)
    {
      return false; 
    }
    else
    {
      return true;  
    }
  }
}

class Assignment29_4
{
  public static void main(String args[])
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter value");
    int value = sobj.nextInt();

    Bitwise bobj = new Bitwise();

    boolean bRet = bobj.Chkbit(value);

    if(bRet == true)
    {
      System.out.println("bit is ON");  
    }
    else
    {
        System.out.println("bit is OFF");
    }

  }   
}