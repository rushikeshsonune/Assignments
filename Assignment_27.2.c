// 27.2   accept a string from user and copy the contents of that string into another string .(implement strcpy() function).
// Input :   "Marvellous Multi OS"
//           10
// Output :  "Marvellous"

#include<stdio.h>

void strNcpyX(char *src,char *dest,int iCnt)
{
  while((*src != '\0') && (iCnt != 0))
  {
    *dest = *src;

    src++;
    dest++;
    iCnt--;
  } 
  *dest = '\0';
}


int main()
{
  char Arr[30] = "Marvellous Multi OS ";
  char Brr[30];   // Empty string
  
  strNcpyX(Arr,Brr,10);

  printf("Modified string is : %s\n",Brr);

  return 0;  
}