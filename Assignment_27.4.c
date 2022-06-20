// 27.4   accept a string from user and copy the small letters of that string into another string .
// Input :   "Marvellous Multi OS"
//           
// Output :  "arvellous ulti"

#include<stdio.h>

void StrCpySmall(char *src,char *dest)
{
  while(*src != '\0')
  {
    if((*src >= 'a') && (*src <= 'z'))
    {
      *dest = *src;
      
      *dest++;
    }
    src++;
  }
  *dest = '\0';
}


int main()
{
  char Arr[30] ="Marvellous Multi OS";
  char Brr[30];   // Empty string
  
  StrCpySmall(Arr,Brr);

  printf("Modified string is : %s\n",Brr);

  return 0;  
}