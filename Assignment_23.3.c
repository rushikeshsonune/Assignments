//  23.3  Accept char from user . if character is Capital then Display all characters from the input till Z
//         and if character is small then  Display all char in reverse order till a.
//         in other cases return directly
// Input :  Q
// Output :  Q  R   S   T   U   V   W   X   Y   Z

#include<stdio.h>

void display(char ch)
{
  char CH = '\0';

  if((ch >= 'A')&&(ch <= 'Z'))
  {
    for(CH = ch;CH <= 'Z';CH++)
    {
        printf("%c\n",CH);
    }  
  }
  else if((ch >= 'a') && (ch <= 'z'))
  {
    for(CH = ch;CH >= 'a';CH--)
    {
        printf("%c\n",CH);
    }   
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
