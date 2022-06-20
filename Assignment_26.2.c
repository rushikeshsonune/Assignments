// 26.2   accept a string from user and accept one character . return frequency of that character.
// Input :   "Marvellous 121"
//            l
// Output :   2

#include<stdio.h>

int CountChar(char *str,char ch)
{
  int iCnt = 0;

  while(*str != '\0')
  {
    if(*str == ch)
    {
      iCnt++;  
    }  
    str++;
  }

  return iCnt;
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

  iRet = CountChar(Arr,cValue);

  printf("Frequency is %d\n",iRet);

  return 0;  
}