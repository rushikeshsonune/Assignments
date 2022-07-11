// 36.5  write a recursive program which display bew pattern
//      a   b   c   d   e   f

#include<stdio.h>

void Display()
{
  static int i = 0;
  static char ch = 'a';
  

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