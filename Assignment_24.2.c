// 24.2  WAP which accepts string from user and Count num of Small Characters
// Input : Marvellous 
// Output :  9

#include<stdio.h>

int Count(char *str)
{
  int iCnt = 0;

  while(*str != '\0')
  {
    if((*str >= 'a')&&(*str <= 'z'))
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
  int iRet = 0;
  
  printf("Enter string \n");
  scanf("%[^'\n']s",Arr);

  iRet = Count(Arr);

  printf("Count of Small Character is : %d\n",iRet);

  return 0;  
}