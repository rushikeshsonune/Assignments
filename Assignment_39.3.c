// 39.3  write a recursive program which accepts String from user and count number of small characters.
//       HellO WorlD
//        6

#include<stdio.h>

int Small(char *str)
{
  static int iCnt = 0;

  if(*str != '\0')
  {
    if((*str >= 'a')&&(*str <= 'z'))
    {
      iCnt++;
    }

    str++;

    Small(str);
  }

  return iCnt;
}

int main()
{
  char arr[20];
  int iRet = 0;
  
  printf("Enter String\n");
  scanf("%[^'\n]s",arr);

  iRet = Small(arr);

  printf("%d\n",iRet);
 
  return 0;  
}