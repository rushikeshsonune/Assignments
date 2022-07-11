// 35.4  write generic program which accepts N values and search last occurance of specific value.
//  Input :   10   20  30  10  30  40  10  40  10

//  value :   40

// Output :  8


#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
  int i = 0,iCnt = 0;

  iCnt = iSize;

  for(i= (iSize-1); i>=0; i--)
  {
    
    if(arr[i] == iNo)
    {
      break; 
    } 

    iCnt--;

  } 

  return iCnt; 
}


int main()
{
 int arr[] = {10,20,30,10,30,40,10,40,10};

 int iret = SearchLast(arr,9,40);

 cout<<"Last occurance is : "<<iret<<endl;

  return 0;   
}