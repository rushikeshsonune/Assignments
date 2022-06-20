// 22.3 Accept character from user and check whether it is Digit or not (0-9)
//  Input : 7
//  Output : TRUE
//  INput : d
//  Output : FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
  if(ch >= '0' && ch <= '9')
     {
       return TRUE;
     }

   return FALSE;
}

int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter  Character \n");
  scanf("%c",&cValue);

  bRet = ChkDigit(cValue);

  if(bRet == TRUE)
  {
    printf("It is Digit \n");   
  }
  else
  {
    printf("It is Not Digit\n");  
  }

  return 0;   
}
