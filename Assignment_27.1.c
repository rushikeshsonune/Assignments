// 27.1   accept a string from user and copy the contents of that string into another string .(implement strcpy() function).
// Input :   Marvellous Multi OS 
// Output :  Marvellous Multi OS 

#include<stdio.h>

void strcpyX(char *src,char *dest)
{
  while(*src != '\0')
  {
    *dest = *src;

    src++;
    dest++;
  } 
  *dest = '\0';
}


int main()
{
  char Arr[30] = "Marvellous Multi OS ";
  char Brr[30];   // Empty string
  
  strcpyX(Arr,Brr);

  printf("Modified string is : %s\n",Brr);

  return 0;  
}