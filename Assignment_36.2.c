// 36.2   write a recursive program which display bew pattern
//    1   2   3   4   5

#include<stdio.h>

void Display()
{
  static int i = 0;

  if(i < 5)
  {
    i++;
    
    printf("%d\t",i);

    Display();
  }
}

int main()
{
  Display();
 
  return 0;  
}