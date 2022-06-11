//  6.2  accept number and check wheather  it contains o in it or not.
//   Input : 2395
//   Output : there is no Zero
//   Input : 1018
//   Output : It Contains Zero

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
  int iDigit = 0;

  if(iNo < 0)
  {
    iNo = -iNo;  
  }
 
 while(iNo != 0)
 {
   iDigit = iNo % 10;
   if(iDigit == 0)
   {
    return TRUE;  
   }
   iNo = iNo / 10;  
 }
   return FALSE;
}

int main()
{

  int iValue = 0;
  BOOL bRet = FALSE;

  printf("Enter Number \n");
  scanf("%d",&iValue);

  bRet = ChkZero(iValue);

  if(bRet == TRUE)
  {
    printf("It Contains Zero");  
  }
  else
  {
    printf("There is No Zero");  
  }

  return 0;
}