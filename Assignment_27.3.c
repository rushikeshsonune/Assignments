// 27.3   accept a string from user and copy the Capital letters of that string into another string .(implement strcpy() function).
// Input :   "Marvellous Multi OS"
//           
// Output :  "MMOS"

#include<stdio.h>

void strcpyCap(char *src,char *dest)
{
  while(*src != '\0')
  {
    if((*src >= 'A') && (*src <= 'Z'))
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
  
  strcpyCap(Arr,Brr);

  printf("Modified string is : %s\n",Brr);

  return 0;  
}