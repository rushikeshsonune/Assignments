// 34.4   write generic program which accepts N values from user and return largest value.

#include<iostream>
using namespace std;

template<class T>
T Maxx(T *arr ,int iSize)
{
  T Max = arr[0];
  int i= 0;

  for(i=0;i<iSize;i++)
  {
    if(arr[i] > Max)
    {
      Max = arr[i];  
    }
  }
  return Max;
}

int main()
{
  int arr[] = {10,20,30,40,50};

  float brr[] = {10.0,3.7,9.8,8.7};

  int iRet = Maxx(arr,5);
  printf("%d\n",iRet);

  float fRet = Maxx(brr,4);
  printf("%f\t",fRet);

  return 0;   
}