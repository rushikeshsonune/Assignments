// 29.1   wap and which checks whether 15th bit is ON or OFF.

import java.lang.*;
import java.util.*;

class Bitwise
{
  public boolean Chkbit(int iNo)
  {
    int iResult = 0;

    int iMask = 0x00004000;  

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

class Assignment29_1
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