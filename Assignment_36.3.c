// 36.3  write a recursive program which display bew pattern
//       5    4    3    2    1

#include<stdio.h>

void Display()
{
  static int i = 5;

  if(i > 0)
  { 
    printf("%d\t",i);

    i--;

    Display();
  }
}

int main()
{
  Display();
 
  return 0;  
}