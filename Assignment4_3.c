// 4.3 write aa program which accepts number from user and display its non factors.
//  input:   12
// output :  5  7  8  9  10  11

#include<stdio.h>

void NonFact(int iNo)
{
  int i = 0;

  for(i=1;i<=iNo;i++)
  {
      if(iNo%i==0)
      {
        continue;  
      }
      else
      {
        printf("%d\t",i);  
      }
  }
}

int main()
{
 int iValue = 0;

 printf("Enter number");
 scanf("%d",&iValue);

 NonFact(iValue);

  return 0;
}