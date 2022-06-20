//  23.4  Accept character  from user and check whether it is special symbol or not
// Input :  %
// Output :  TRUE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
  if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
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
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter  Character \n");
  scanf("%c",&cValue);
  
  bRet = ChkSpecial(cValue);

  if(bRet == TRUE)
  {
    printf("It is a special Character");  
  }
  else
  {
    printf("It is Not a special Character");   
  }

  return 0;   
}
