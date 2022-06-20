// 22.1 Accept character from user and check whether it is alphabet or not (A-Z , a-z)
//  INput : F 
//  Output : TRUE
//  INput : &
//  Output : FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
  if((ch >= 'A' && ch <= 'Z') ||
     (ch >= 'a' && ch <= 'z'))
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

  bRet = ChkAlpha(cValue);

  if(bRet == TRUE)
  {
    printf("It is an Character \n");   
  }
  else
  {
    printf("It is not an Character\n");  
  }

  return 0;   
}
