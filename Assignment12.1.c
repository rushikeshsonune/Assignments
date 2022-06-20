// input :  5
// Output : A   B   C   D   E

#include<stdio.h>
  
void Pattern(int iNo)
{
  int iCnt = 0;

  for(iCnt=65;iCnt<(iNo+65);iCnt++)
  {
      printf("%c\t",iCnt);
  }

}


int main()
{
  int iValue = 0;

  printf("Enter number \n");
  scanf("%d",&iValue);

  Pattern(iValue);

  return 0;  
}