// 39.2  write a recursive program which accepts number from user and return largest digit.
//       5896553
//        9

#include<stdio.h>

int Max(int iNo)
{
  static int iMax = 0;
  int iDigit = 0;

  if(iNo != 0)
  {
    iDigit = iNo % 10;

    if(iDigit > iMax)
    {
      iMax = iDigit;  
    }

    iNo = iNo / 10;

    Max(iNo);
  }

  return iMax;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  
  printf("Enter Number\n");
  scanf("%d",&iValue);

  iRet = Max(iValue);

  printf("%d\n",iRet);
 
  return 0;  
}