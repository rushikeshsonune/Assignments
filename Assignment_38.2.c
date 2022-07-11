// 38.2  write a recursive program which accepts number from user and return summation od its digits.
//       879
//       24

#include<stdio.h>

int Sum(int iNo)
{
  int iDigit = 0;
  static int iSum = 0;

  if(iNo != 0)
  {
    iDigit = iNo % 10;

    iSum = iSum + iDigit;

    iNo = iNo / 10;

    Sum(iNo);
  } 

  return iSum;
}

int main()
{
  int iValue = 0,iRet = 0;
  
  printf("Enter value\n");
  scanf("%d",&iValue);

  iRet = Sum(iValue);

  printf("%d\n",iRet);
 
  return 0;  
}