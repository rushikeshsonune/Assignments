// 38.4  write a recursive program which accepts number from user and return its factorial.
//       5
//       120

#include<stdio.h>

int Fact(int iNo)
{
  static int iMult = 1;

  if(iNo > 0)
  {
    iMult = iMult * iNo;

    iNo--;

    Fact(iNo);
  } 
  
  return iMult;
  
}

int main()
{
  int iValue = 0;  
  int iRet = 0;
  
  printf("Enter Number\n");
  scanf("%d",&iValue);

  iRet = Fact(iValue);

  printf("%d\n",iRet);
 
  return 0;  
}
