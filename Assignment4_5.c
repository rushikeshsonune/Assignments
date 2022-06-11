//  4.5  write a program which accepts number from user and return difference betn summation of all its factors and non factors
// input  :  12
// output :  -34
// input  :  10
// output :  -29

#include<stdio.h>

int FactDiff(int iNo)
{
  int iCnt = 0;
  int Sum1 = 0;
  int Sum2 = 0;

  for(iCnt=1;iCnt<iNo;iCnt++)
  {
    if((iNo%iCnt)==0)
    {
      Sum1 = Sum1 + iCnt;  
    }
    else
    {
      Sum2 = Sum2 + iCnt;
    }
  }
  return Sum1-Sum2;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number \t");
  scanf("%d",&iValue);

  iRet = FactDiff(iValue);

  printf("%d\n",iRet);

  return 0;
}