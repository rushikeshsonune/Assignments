// 35.2   write generic program which accepts N values and count frequency of specific value.
//  Input :   10    20  30  10  30  40  10  40  10

//  value :   10

// Output :  4


#include<iostream>
using namespace std;

template<class T>
int frequency(T *arr, int iSize, T iNo)
{
  int i = 0,iCnt = 0;

  for(i=0;i<iSize;i++)
  {
    if(arr[i] == iNo)
    {
      iCnt++; 
    } 
  } 

  return iCnt; 
}


int main()
{
 int arr[] = {10,20,30,10,30,40,10,40,10};

 int iret = frequency(arr,9,10);

 cout<<iret<<endl;

  return 0;   
}