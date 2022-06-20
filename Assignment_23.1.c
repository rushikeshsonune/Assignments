//  23.1  WAP to display ASCII table  (0 to 255)

#include<stdio.h>

void displayASCII()
{
  unsigned char ch = '\0';

  for(ch = 0;ch <= 255;ch++)
  {
    printf("%d -> %c\n",ch,ch);

    if(ch == 255)
    {
      break; 
    }
  }
}

int main()
{
  displayASCII();

  return 0;   
}
