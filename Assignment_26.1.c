// 26.1   accept a string from user and accept one character .check whether that character is present in string or not.
// Input :   "Marvellous 121"
//            e
// Output :  TRUE

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
  while(*str != '\0')
  {
    if(*str == ch)
    {
      break;  
    }  
    str++;
  }

  if(*str != '\0')
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
  char Arr[20];
  char cValue;
  BOOL bRet = FALSE;
  
  printf("Enter string \n");
  gets(Arr);

  printf("Enter character\n");
  scanf("%c",&cValue);

  bRet = ChkChar(Arr,cValue);

  if(bRet == TRUE)
  {
    printf("character Found\n");  
  }
  else
  {
    printf("Character Not Found\n");  
  }

  return 0;  
}