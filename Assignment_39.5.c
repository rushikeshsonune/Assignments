
// 39.5  write a recursive program which accepts number from user and return reverse number of it.
//       1234
//       4321

#include<stdio.h>

int Rev(int iNo)
{
  int iDigit = 0;
  static int rev = 0;

  if(iNo != 0)
  {
    iDigit = iNo % 10;

    iNo = iNo / 10;

    rev = (rev*10) + iDigit;

    Rev(iNo);
  }  

  return rev;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  
  printf("Enter Number\n");
  scanf("%d",&iValue);

  iRet = Rev(iValue);

  printf("%d\n",iRet);
 
  return 0;  
}