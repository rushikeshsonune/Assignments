// 28.1   accept a 2 strings from user and copy that string into another string in reverse order.
// Input :   "Rushikesh Sonune"
//           
// Output :  "enunoS hsekihsuR"

#include<stdio.h>

void StrCpyRev(char *src,char *dest)
{
  int iCnt = 0;

  while(*src != '\0')
  {
    src++;
    iCnt++;
  }
  src--;
  iCnt--;

  while(iCnt >= 0)
  {
    *dest = *src;

    dest++;
    src--; 
    iCnt--; 
  }
  *dest = '\0';
 
}


int main()
{
  char Arr[30] ="Rushikesh Sonune";
  char Brr[30]; // empty
  
  StrCpyRev(Arr,Brr);

  printf("Modified string is : %s\n",Brr);

  return 0;  
}