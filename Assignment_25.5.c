// 25.5  accept a string from user and Count number of white spaces from that string
// Input :   "Marvellous 121"
// Output :  1

#include<stdio.h>

int CountWhite(char *str)
{
  int iCnt = 0;

  while(*str != '\0')
  {
    if(*str == ' ')
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

  iRet = CountWhite(Arr);

  printf("%d\n",iRet);

  return 0;  
}