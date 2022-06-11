//  7.4  Write a program which Accepts number from user and return Multiplication of All Digits.
//   Input  : 2395
//   Output :  270

//   Input  : 1018
//   Output :  8

//   Input  : 9440
//   Output :  144

#include<stdio.h>

int MulDigits(int iNo)
{
 int iDigit = 0;
 int iSum = 1;

 if(iNo < 0)
 {
   iNo = -iNo;  
 }
 
 while(iNo > 0)
 {

   iDigit = iNo % 10;

   iNo = iNo / 10;
 
 iSum = iSum * iDigit;
 }

 return iSum;
 
}

int main()
{

  int iValue = 0;
  int iRet = 0;

  printf("Enter Number \n");
  scanf("%d",&iValue);

  iRet = MulDigits(iValue);

  printf("%d\n",iRet);

  return 0;
}

// Time Complexity O(N)