// 24.1   WAP which accepts string from user and Count num of Capital Characters
// Input : MarveLLous 
// Output :  3

#include<stdio.h>

int CountCapital(char *str)
{
  int iCnt = 0;

  while(*str != '\0')
  {
    if((*str >= 'A')&&(*str <= 'Z'))
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

  iRet = CountCapital(Arr);

  printf("Count of capital Character is : %d\n",iRet);

  return 0;  
}