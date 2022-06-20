// 28.5  accept a strings from user and copy that string into another string by toggling the case.
// Input :   "MarvellOuS"
//           
// Output :  "mARVELLoUs"

#include<stdio.h>

void StrCpyToggle(char *src,char *dest)
{

  while(*src != '\0')
  {
    if((*src >= 'A')&&(*src <= 'Z'))
    {
      *src = *src + 32;  
    }
    else if((*src >= 'a')&&(*src <= 'z'))
    {
      *src = *src - 32;  
    }
    
    *dest = *src;

    src++;
    dest++;
  }

  *dest = '\0';
}


int main()
{
  char Arr[50] = "MarvellOuS";
  char Brr[50]; // empty
  
  StrCpyToggle(Arr,Brr);

  printf("Modified string is : %s\n",Brr);

  return 0;  
}