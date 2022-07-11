// 34.2   write generic program find largest number from numbers.

#include<iostream>
using namespace std;

template<class T>
T Maximum(T no1,T no2 ,T no3)
{
  if((no1 > no2) && (no1 > no3))
  {
    return no1;
  }  
  else if((no2 > no1) && (no2 > no3))
  {
    return no2;
  }
  else if((no3 > no1) && (no3 > no2))
  {
    return no3;
  }
  else
  {
    cout<<"All are equal"<<endl;
    return no1;
  }
}

int main()
{
  int iNO1 = 0,iNo2 = 0,iNo3 = 0,iRet = 0;
  cout<<"Enter three numbers"<<endl;
  cin>>iNO1>>iNo2>>iNo3;

  iRet = Maximum(iNO1,iNo2,iNo3);

  cout<<"maximum is:"<<iRet<<endl;

  return 0;   
}