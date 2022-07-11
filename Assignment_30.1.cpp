// 30.1  WAP which checks whether 15th bit is ON or OFF.

#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
  int iResult = 0;

  int iMask = 0x00004000;

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
  int value = 0;
  BOOL bRet = FALSE;

  cout<<"Enter number"<<endl;
  cin>>value;

  bRet = ChkBit(value);

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