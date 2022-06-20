// 22.2  Accept character from user and check whether it is Capital or not (A-Z)
//  Input : F 
//  Output : TRUE
//  INput : d
//  Output : FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
  if(ch >= 'A' && ch <= 'Z')
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

  bRet = ChkCapital(cValue);

  if(bRet == TRUE)
  {
    printf("It is Capital Character \n");   
  }
  else
  {
    printf("It is Not Capital Character\n");  
  }

  return 0;   
}
