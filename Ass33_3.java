// 33.3  WAP which accepts  number from user and check whether 9th and 12th bits are ON or OFF. 

import java.lang.*;
import java.util.*;

class Bitwise
{
  public boolean CountOne(int iNo)
  {
    int iResult = 0;
    int mask = 0x00000900;
    
    iResult = iNo & mask;

    if(iResult != 0)
    {
      return true;   
    }
    else
    {
      return false;  
    }

  }
}

class Ass33_3
{
  public static void main(String args[])
  {
    Scanner sobj = new Scanner(System.in);

    Bitwise bobj = new Bitwise();

    System.out.println("Enter number");
    int value1 = sobj.nextInt();

    boolean bret = bobj.CountOne(value1);
       
    if(bret == true)
    {
      System.out.println("Bits are ON");  
    }
    else
    {
     System.out.println("Bits are OFF");   
    }
    
  }
}
