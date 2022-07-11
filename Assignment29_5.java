// 29.5   wap and which checks whether first and last bit is ON or OFF.
//first means bit number 1 and last means bit number 32.

import java.lang.*;
import java.util.*;

class Bitwise
{
  public boolean Chkbit(int iNo)
  {
    int iResult = 0;

    int iMask = 0x80000001; // 2147483649  //1000 0000 0000 0000 0000 0000 0000 0001
                            //                 8    0    0    0    0    0    0    1
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

class Assignment29_3
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