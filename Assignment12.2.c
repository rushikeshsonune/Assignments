// input :  5
// Output : 5   #   4   #   3   #   2   #   1   #

#include<stdio.h>
  
void Pattern(int iNo)
{
  register int iCnt = 0;

  for(iCnt=iNo;iCnt>0;iCnt--)
  {
     printf("%d\t#\t",iCnt);
  }

}


int main()
{
  auto int iValue = 0;

  printf("Enter number \n");
  scanf("%d",&iValue);

  Pattern(iValue);

  return 0;  
}