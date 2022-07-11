// 35.3  write generic program which accepts N values and search first occurance of specific value.
//  Input :   10   20  30  10  30  40  10  40  10

//  value :   40

// Output :  6


#include<iostream>
using namespace std;

template<class T>
int Searchfirst(T *arr, int iSize, T iNo)
{
  int i = 0,iCnt = 0;

  for(i=0; i < iSize; i++)
  {
    iCnt++;

    if(arr[i] == iNo)
    {
      break; 
    } 

  } 

  return iCnt; 
}


int main()
{
 int arr[] = {10,20,30,10,30,40,10,40,10};

 int iret = Searchfirst(arr,9,40);

 cout<<"first occurance is : "<<iret<<endl;

  return 0;   
}