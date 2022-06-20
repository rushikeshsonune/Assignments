//  23.5  Accept character  from user and Display ASCII values in decimal ,octal,hexadecimal format
// Input :  A
// Output :  decimal        65
//           Octal          0101
//           Hexadecimal    0X41
//  

#include<stdio.h>

void Display(char ch)
{
  printf("Decimal\t%d\n",ch);  
  printf("Octal\t%o\n",ch);  
  printf("Hexadecimal\t%x\n",ch);  
}

int main()
{
  char cValue = '\0';

  printf("Enter  Character \n");
  scanf("%c",&cValue);

  Display(cValue);
  
  return 0;   
}
