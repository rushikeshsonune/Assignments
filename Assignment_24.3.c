// 24.3   WAP which accepts string from user and return difference between frequency of Small Characters and capital characters.
// Input : MarvellouS 
// Output :  6     (8-2)

#include<stdio.h>

int Difference(char *str)
{
  int i = 0,j = 0;

  while(*str != '\0')
  {
    if((*str >= 'a')&&(*str <= 'z'))
    {
      i++;  
    } 
    if((*str >= 'A')&&(*str <= 'Z'))
    {
      j++;  
    } 

    str++; 
  }

  return (i-j);
}

int main()
{
  char Arr[20];
  int iRet = 0;
  
  printf("Enter string \n");
  scanf("%[^'\n']s",Arr);

  iRet = Difference(Arr);

  printf("Difference is : %d\n",iRet);

  return 0;  
}