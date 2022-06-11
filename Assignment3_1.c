//3.1 Accept one number and print that number of even num. on screen
// Input :  7
// output :  2  4  6  8  10  12  14

#include<stdio.h>
 
 void printEven(int iNo)
 { 
  int iCnt=0;
   if(iNo <= 0)
   {
	 return;   
   }
   
  for(iCnt=1;iCnt<=iNo*2;iCnt++)
  {
   if((iCnt%2)==0)
   {
	 printf("%d\t",iCnt);  
   }	   
  }	  
 }
 
int main()
{
  int iValue = 0;
  printf("Enter number \n");
  scanf("%d",&iValue);
  
  printEven(iValue);

  return 0;  
}	