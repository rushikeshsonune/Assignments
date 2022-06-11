// 4.4 write a program which accepts number from user and return summation of its non factor
// input  :  12
// output :  50
// input  :  10
// output :  37

#include<stdio.h>

int SunNonFact(int iNo)
{
  int i = 0;
  int Sum = 0;
   
   for(i=1;i<=iNo;i++)
   {
     if((iNo%i)!=0)
     {
       Sum = Sum + i;
     }
   }
   return Sum;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number");
  scanf("%d",&iValue);

  iRet = SunNonFact(iValue);

  printf("Summation of Non Factors is : %d\n",iRet);

  return 0;
}