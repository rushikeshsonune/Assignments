// 22.4  Accept character from user and check whether it is Small case or not (a-z)
//  Input :  g
//  Output : TRUE
//  INput :  D
//  Output : FALSE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
  if(ch >= 'a' && ch <= 'z')
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

  bRet = ChkSmall(cValue);

  if(bRet == TRUE)
  {
    printf("It is Small case \n");   
  }
  else
  {
    printf("It is Not Small case\n");  
  }

  return 0;   
}
