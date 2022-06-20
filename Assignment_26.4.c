// 26.4   accept a string from user and accept one character . return index of Last occurance of that character.
// Input :   "Marvellous 121"
//            l
// Output :   6

#include<stdio.h>

int LastChar(char *str,char ch)
{
  int iCnt = 0,i = 0,Counter;

  while(*str != '\0')
  {
    iCnt++;
    str++;
  }
  iCnt--;
  str--;

  Counter = iCnt;

  for(i=iCnt;i>=1;i--)
  {
    if(*str == ch)
    {
      break;  
    }

    Counter--;
  }

  return Counter;  
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

  iRet = LastChar(Arr,cValue);

  printf("Last occurance is at index: %d\n",iRet);

  return 0;  
}