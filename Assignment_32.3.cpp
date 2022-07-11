// 32.3   WAP which Accepts one number and position from user and ON that bit.
//         return modified number.

#include<iostream>
using namespace std;


int ONBit(int iNo,int ipos)
{
  int iResult = 0;

  int iMask = 0x00000001 << (ipos-1);

  iResult = iNo | iMask;

  return iResult;
}

int main()
{
  int value = 0,iPos = 0,iRet = 0;

  cout<<"Enter number"<<endl;
  cin>>value;

  cout<<"Enter Position"<<endl;
  cin>>iPos;

  iRet = ONBit(value,iPos);

  cout<<"Modified number is "<<iRet<<endl;

  return 0;  
}