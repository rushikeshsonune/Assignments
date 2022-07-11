// 36.4  write a recursive program which display bew pattern
//      A   B   C   D   E   F

#include<stdio.h>

void Display()
{
  static int i = 0;
  static char ch = 'A';

  if(i <= 5)
  {
    i++;
    
    printf("%c\t",ch);

    ch++;

    Display();
  }
}

int main()
{
  Display();
 
  return 0;  
}