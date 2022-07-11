// 32.1   WAP which Accepts one number and position from user and check whether bit is ON or OFF.
//          if bit is ON return TRUE otherwise return FALSE.

#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

UNIT ChkBit(UNIT iNo,int ipos)
{
  int iResult = 0;

  int iMask = 0x00000001 << (ipos-1);

  iResult = iNo & iMask;

  if(iResult == 0)
  {
    return FALSE;
  }
  else
  {
    return TRUE; 
  }
}

int main()
{
  int value = 0,iPos = 0;
  BOOL bRet = FALSE;

  cout<<"Enter number"<<endl;
  cin>>value;

  cout<<"Enter Position"<<endl;
  cin>>iPos;

  bRet = ChkBit(value,iPos);

  if(bRet == TRUE)
  {
    cout<<"Bit is ON"<<endl;
  }
  else
  {
    cout<<"Bit is OFF"<<endl;
  }

  return 0;  
}