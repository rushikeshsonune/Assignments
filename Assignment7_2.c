//  7.2  Write a program which Accepts number from user and return count of Odd digits.
//   Input : 2395
//   Output : 3
//   Input : 1018
//   Output : 2

#include<stdio.h>

int CountOdd(int iNo)
{
 int iDigit = 0;
 int iCnt = 0;

 if(iNo < 0)
 {
   iNo = -iNo;  
 }
 
 while(iNo > 0)
 {
   iDigit = iNo % 10;
   if((iDigit % 2)!=0)
   {
     iCnt++;
   }
   iNo = iNo / 10;
 }
 return iCnt;

}

// Time Complexity O(N)

int main()
{

  int iValue = 0;
  int iRet = 0;

  printf("Enter Number \n");
  scanf("%d",&iValue);

  iRet = CountOdd(iValue);

  printf("%d\n",iRet);

  return 0;
}