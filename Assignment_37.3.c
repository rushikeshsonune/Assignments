// 37.3   write a recursive program which display bew pattern
//    5
//    5   4   3   2   1

#include<stdio.h>

void Display( int iNo)
{
  static int i = 0;

   i = iNo;

  if(i > 0)
  {

    printf("%d\t",i);

    i--;
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