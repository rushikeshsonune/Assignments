//accept one num from user and print even factors of that number
// Input : 24
// output :  2  4  6  8  12

#include<stdio.h>
 
 void printEven(int iNo)
 { 
  int iCnt=0;
   if(iNo <= 0)
   {
	 return;   
   }
   
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
   if(((iNo%iCnt)==0)&&
     (iCnt%2)==0)
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