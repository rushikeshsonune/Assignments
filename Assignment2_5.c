// 2.5  Accept number from user and check wheather number is Even or Odd 

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
  if(iNo%2==0)
  {
    return TRUE;  
  }  
  else 
  {
    return FALSE; 
  }
}

int main()
{
  int iValue = 0;
  BOOL bRet = FALSE;

  printf("Enter Number ");
  scanf("%d",&iValue);

  bRet = ChkEven(iValue);

  if(bRet == TRUE)
  {
   printf("%d is Even",iValue);   
  }
  else
  {
   printf("%d is Odd",iValue); 
  }

    return 0;
}