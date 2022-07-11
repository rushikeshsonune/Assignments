#include<stdio.h>

int Min(int iNo)
{
  static int iMin = 10;
  int iDigit = 0;

  if(iNo > 0)
  {
    iDigit = iNo % 10;

    if(iMin > iDigit)
    {
      iMin = iDigit;  
    }
    iNo = iNo / 10; 

    Min(iNo);
  }  
  return iMin;
}

int main()
{
  int iValue= 0,iRet = 0;
  
  printf("Enter Number \n");
  scanf("%d",&iValue);

  iRet = Min(iValue);

  printf("Smallest Digit is %d\n",iRet);

  return 0;  
}