// 31.5   WAP which Accepts one number from user and ON its first 4 bits. return modified number.

#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

UNIT ToggleBit(UNIT iNo)
{
  int iResult = 0;

  int iMask = 0x0000000f;

  iResult = iNo | iMask;

  return iResult;
}

int main()
{
  int value = 0;
  int Ret = 0;

  cout<<"Enter number"<<endl;
  cin>>value;

  Ret = ToggleBit(value);

  cout<<"Modified number is "<<Ret<<endl;

  return 0;  
}