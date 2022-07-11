// 33.5  WAP which accepts  number from user and and range of positions from user. toggle all bits from that range. 

import java.lang.*;
import java.util.*;

class Bitwise
{
  public int ToggleBit(int iNo,int iPos1,int iPos2)
  {
    int Result = 0;
    int mask = 0x00000001 << (iPos1 - 1);
    
    for(int i=iPos1;i<iPos2;i++)
    {
      Result = iNo ^ mask;

      mask = mask << 1;

    }

    return Result;
  } 
}

class Ass33_5
{
  public static void main(String args[])
  {
    Scanner sobj = new Scanner(System.in);

    Bitwise bobj = new Bitwise();

    System.out.println("Enter number");
    int value1 = sobj.nextInt();

    System.out.println("Enter starting position");
    int Pos1 = sobj.nextInt();

    System.out.println("Enter ending position");
    int Pos2 = sobj.nextInt();

    int iret = bobj.ToggleBit(value1,Pos1,Pos2);
   
    System.out.println(iret);

  }
}
