// 39.1  write a recursive program which accepts String from user and count number of white spaces.
//       He llo Wor ld
//        3

#include<stdio.h>

int WhiteSpace(char *str)
{
  static int iCnt = 0;

  if(*str != '\0')
  {
    if(*str == ' ')
    {
      iCnt++;
    }

    str++;

    WhiteSpace(str);
  }

  return iCnt;
}

int main()
{
  char arr[20];
  int iRet = 0;
  
  printf("Enter String\n");
  scanf("%[^'\n]s",arr);

  iRet = WhiteSpace(arr);

  printf("%d\n",iRet);
 
  return 0;  
}