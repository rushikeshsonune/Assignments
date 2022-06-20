// 27.5   accept a 2 strings from user and concate second string after first string .
// Input :   "Rushikesh"
//           "Sonune"
// Output :  "Rushikesh Sonune"

#include<stdio.h>

void StrCatX(char *src,char *dest)
{

  while(*src != '\0')
  {
    src++;
  }

  while(*dest != '\0')
  {
    *src = *dest;

    src++;
    dest++;  
  }
  *src = '\0';
 
}


int main()
{
  char Arr[30] ="Rushikesh ";
  char Brr[30] = "Sonune";
  
  StrCatX(Arr,Brr);

  printf("Modified string is : %s\n",Arr);

  return 0;  
}