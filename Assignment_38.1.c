// 38.1  write a recursive program which display bew pattern
//     5
//     5    *   4   *   3   *   2   *   1   *

#include<stdio.h>

void Display(int iNo)
{ 

  if(iNo > 0)
  {
    
    printf("%d\t*\t",iNo);
    
    iNo--;

    Display(iNo);
  }
}

int main()
{
  int iValue = 0;
  
  printf("Enter value\n");
  scanf("%d",&iValue);

  Display(iValue);
 
  return 0;  
}