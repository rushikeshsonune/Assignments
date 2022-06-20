//  23.2  Accept char from user . if character is small Display its corresponding capital character.
//         and if character is Capital Display its corresponding small character.
// Input :  Q
// Output : q

#include<stdio.h>

void display(char ch)
{
  if((ch >= 'A')&&(ch <= 'Z'))
  {
    ch = ch + 32;

    printf("%c\n",ch);  
  }
  else
  {
    printf("%c\n",ch);  
  }
}

int main()
{
  char cValue = '\0';

  printf("Enter  Character \n");
  scanf("%c",&cValue);
  
  display(cValue);

  return 0;   
}
