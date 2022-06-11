//  6.5  Write a program which Accepts number from user and count frequency of such  digit which are less than 6.
//   Input : 2395
//   Output : 3
//   Input : 1018
//   Output : 3

#include<stdio.h>

int Count(int iNo)
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
   if(iDigit < 6)
   {
     iCnt++;
   }
   iNo = iNo / 10;
 }
 return iCnt;

}


int main()
{

  int iValue = 0;
  int iRet = 0;

  printf("Enter Number \n");
  scanf("%d",&iValue);

  iRet = Count(iValue);

  printf("%d\n",iRet);

  return 0;
}