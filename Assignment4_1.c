//  4.1  write a program which accepts a number from user and display its multiplication of factors 
// Input :    12    (1*2*3*4*6)      
// Output :   144
// Input :    13      
// Output :   1
// Input :    10  (1*2*5)      
// Output :   10

#include<stdio.h>

int MultFact(int iNo)
{
  int iCnt=0;
  int Mult=1;

  if(iNo<0)
  {
    iNo = -iNo;  
  }
  
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
    if(iNo%iCnt==0)
    {
      Mult = Mult*iCnt;  
    }
  }
  return Mult;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter Number\n");
  scanf("%d",&iValue);

  iRet = MultFact(iValue);

  printf("%d",iRet);

  return 0;
}