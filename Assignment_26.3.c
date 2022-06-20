// 26.3   accept a string from user and accept one character . return index of first occurance of that character.
// Input :   "Marvellous 121"
//            l
// Output :   6

#include<stdio.h>

int FirstChar(char *str,char ch)
{
  int iCnt = 0;

  while(*str != '\0')
  {
    if(*str == ch)
    {
      break; 
    }
    
    iCnt++;
    str++;
  }

  if(*str == '\0')
  {
    return -1;  
  }
  else
  {
    return iCnt;  
  }
}

int main()
{
  char Arr[20];
  char cValue = '\0';
  int iRet = 0;
  
  printf("Enter string \n");
  gets(Arr);

  printf("Enter character\n");
  scanf("%c",&cValue);

  iRet = FirstChar(Arr,cValue);

  printf("first occurance is at index: %d\n",iRet);

  return 0;  
}