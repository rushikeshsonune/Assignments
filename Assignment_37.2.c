// 37.2   write a recursive program which display bew pattern
//    5
//    1   2   3   4   5

#include<stdio.h>

void Display(int iNo)
{
  static int i = 0;

  if(i < iNo)
  {
    i++;
    
    printf("%d\t",i);

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