// 25.3  accept a string from user and toggle the  case.
// Input :   MaRvellouS
// Output :  mArVELLOUs

#include<stdio.h>

void strtoggleX(char *str)
{
  while(*str != '\0')
  {
    if((*str >= 'a') && (*str <= 'z'))
    {
      *str = *str - 32;  
    }
    else if((*str >= 'A') && (*str <= 'Z'))
    {
      *str = *str + 32;  
    }
    
    str++;  
  }

}

int main()
{
  char Arr[20];
  
  printf("Enter string \n");
  scanf("%[^'\n']s",Arr);

  strtoggleX(Arr);

  printf("Modified string is : %s",Arr);

  return 0;  
}