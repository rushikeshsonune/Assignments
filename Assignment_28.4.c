// 28.4  accept a strings from user and copy that string into another string by converting all capital letters into small case.
// Input :   "MARVELLOUS"
//           
// Output :  "marveLlous"

#include<stdio.h>

void StrCpySmall(char *src,char *dest)
{

  while(*src != '\0')
  {
    if((*src >= 'A')&&(*src <= 'Z'))
    {
      *src = *src + 32;  
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
  
  StrCpySmall(Arr,Brr);

  printf("Modified string is : %s\n",Brr);

  return 0;  
}