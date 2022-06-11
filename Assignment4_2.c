// 4.2  write a program which accepts number from user and display its factor in decreasing order
//  Input : 12
// output : 6  4  3  2  1
//  Input : 13
// output :  1
//  Input : 10
// output : 5  2  1

#include <stdio.h> 

void FactRev(int iNo)
{
  int iCnt = 0;
  if(iNo<0)
  {
    iNo = -iNo;  
  }
  
  for(iCnt=iNo;iCnt>=1;iCnt--)
  {
     if(iNo%iCnt==0)
     {
       printf("%d\t",iCnt);
     }  
  }


}

int main()
{
  int iValue = 0;
  printf("Enter number\n");
  scanf("%d",&iValue);

  FactRev(iValue);

  return 0;
}