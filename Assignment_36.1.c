// 36.1   write a recursive program which display bew pattern
//    *   *   *   *   *

#include<stdio.h>

void Display()
{
  static int i = 0;

  if(i < 5)
  {
    printf("*\t");

    i++;

    Display();
  }
}

int main()
{
  Display();
 
  return 0;  
}