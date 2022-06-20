// 28.2   accept a strings from user and copy that string into another string by removing white spaces.
// Input :   "Marvellous Pre Placement Activity Batch"
//           
// Output : "MarvellousPrePlacementActivityBatch"

#include<stdio.h>

void StrCpyX(char *src,char *dest)
{

  while(*src != '\0')
  {
    if(*src == ' ')
    {
      src++;  
    }
    
    *dest = *src;

    src++;
    dest++;
  }

  *dest = '\0';
}


int main()
{
  char Arr[50] = "Marvellous Pre Placement Activity Batch";
  char Brr[50]; // empty
  
  StrCpyX(Arr,Brr);

  printf("Modified string is : %s\n",Brr);

  return 0;  
}