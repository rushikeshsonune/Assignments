//Accept one characcter from user and convert case of that character.
//intput : a            output : A
//intput : d            output : D

#include<stdio.h>

void DisplayConvert(char CValue)
{
  if(CValue>=65 || CValue<=90)
  {
    CValue = CValue + 32;
    printf("%c",CValue);
  }
}

int main()
{
  char cValue ='\0';

  printf("Enter Any Character \n");
  scanf("%c",&cValue);

  DisplayConvert(cValue);    
  
    return 0;
}