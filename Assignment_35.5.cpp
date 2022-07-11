// 35.5  write generic program which accepts N values and reverse the contents.
//  Input :   10  20  30  10  30  40  10  40  10

// Output :   10  40  10  40  30  10  30  20  10 


#include<iostream>
using namespace std;

template<class T>
int Reverse(T *arr, int iSize)
{
  int i = 0, j = 0;
  T temp;

  j = iSize-1;

  while(i <= j)
  {
    temp = arr[i];

    arr[i] = arr[j];

    arr[j] = temp;

    i++;
    j--;
  }
}


int main()
{
 int arr[] = {10,20,30,10,30,40,10,40,10};

 for(int i=0;i<9;i++)
 {
   cout<<arr[i]<<" "; 
 }
 cout<<endl;

 Reverse(arr,9);

 for(int i=0;i<9;i++)
 {
   cout<<arr[i]<<" "; 
 }
 cout<<endl;


 return 0;   
}