// 28.3  accept a strings from user and copy that string into another string by converting all small letters into capital case.
// Input :   "MarveLlouS"
//           
// Output : "MARVELLOUS"

#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{

  while(*src != '\0')
  {
    if((*src >= 'a')&&(*src <= 'z'))
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
  char Arr[50] = "MarveLlouS";
  char Brr[50]; // empty
  
  StrCpyCap(Arr,Brr);

  printf("Modified string is : %s\n",Brr);

  return 0;  
}