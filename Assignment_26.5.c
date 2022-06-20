// 26.5   accept a string from user and reverse that string in place
// Input :   "abcd"
// Output :   "dcba"

#include<stdio.h>

void strrevX(char *str)
{
  char *start = str;
  char *end = str;
  char temp;

  while(*end != '\0')
  {
    end++;  
  } 
  end--;

  while(start < end)
  {
    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }
}

int main()
{
  char Arr[20];
  
  printf("Enter string \n");
  scanf("%[^'\n']s",Arr);

  strrevX(Arr);

  printf("Modified string is : %s\n",Arr);

  return 0;  
}