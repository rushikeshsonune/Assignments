// 38.3  write a recursive program which accepts String from user and count number of characters
//       Hello
//        5

#include<stdio.h>

int Strlen(char *str)
{
  static int iCnt = 0;

  if(*str != '\0')
  {
    iCnt++;

    str++;

    Strlen(str);
  }

  return iCnt;
}

int main()
{
  char arr[20];
  int iRet = 0;
  
  printf("Enter String\n");
  scanf("%s",arr);

  iRet = Strlen(arr);

  printf("%d\n",iRet);
 
  return 0;  
}