// 25.1  accept a string from user and convert it into lower case.
// Input :   MarvellouS 
// Output :  marvellous

#include<stdio.h>

void strlwrX(char *str)
{
  while(*str != '\0')
  {
    if((*str >= 'A') && (*str <= 'Z'))
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

  strlwrX(Arr);

  printf("Modified string is : %s",Arr);

  return 0;  
}