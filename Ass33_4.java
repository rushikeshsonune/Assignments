// 33.4  WAP which accepts  number and two positions from user and check whether bit at first and bit at second position are ON or OFF. 

import java.lang.*;
import java.util.*;

class Bitwise
{
  public boolean ChkBit(int iNo,int iPos1,int iPos2)
  {
    int Result1 = 0;
    int Result2 = 0;
    int mask = 0x00000001 << (iPos1 - 1);
    
    Result1 = iNo & mask;

    mask = 0x00000001 << (iPos1 - 1);
    
    Result2 = iNo & mask;

    if((Result1 != 0) && (Result2 != 0))
    {
      return true;   
    }
    else
    {
      return false;  
    }

  }
}

class Ass33_4
{
  public static void main(String args[])
  {
    Scanner sobj = new Scanner(System.in);

    Bitwise bobj = new Bitwise();

    System.out.println("Enter number");
    int value1 = sobj.nextInt();

    System.out.println("Enter first position");
    int Pos1 = sobj.nextInt();

    System.out.println("Enter second position");
    int Pos2 = sobj.nextInt();

    boolean bret = bobj.ChkBit(value1,Pos1,Pos2);
       
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
