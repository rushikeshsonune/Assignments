// 37.4  write a recursive program which display bew pattern
//       6
//       A   B   C   D   E   F

#include<stdio.h>

void Display(int iNo)
{
  static char ch = 'A';

  if(iNo > 0)
  {
    printf("%c\t",ch);

    ch++;
    iNo--;

    Display(iNo);
  }

}

int main()
{
  int iValue = 0;

  printf("Enter number \n");
  scanf("%d",&iValue);

  Display(iValue);
 
  return 0;  
}