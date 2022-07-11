// 32.4    WAP which Accepts one number and position from user and Toggle that bit.
//         return modified number.

#include<iostream>
using namespace std;


int ToggleBit(int iNo,int ipos)
{
  int iResult = 0;

  int iMask = 0x00000001 << (ipos-1);

  iResult = iNo ^ iMask;

  return iResult;
}

int main()
{
  int value = 0,iPos = 0,iRet = 0;

  cout<<"Enter number"<<endl;
  cin>>value;

  cout<<"Enter Position"<<endl;
  cin>>iPos;

  iRet = ToggleBit(value,iPos);

  cout<<"Modified number is "<<iRet<<endl;

  return 0;  
}