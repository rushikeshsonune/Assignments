// 9.1 Accept N numbers from user and return frequency of even numbers
//  Input :  N : 6
//   Elements :  85  66  3  80  93  88
//Output :  3

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
  int iCnt = 0;
  int iFrequency = 0;

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if((Arr[iCnt] % 2)==0)
    {
      iFrequency++;  
    }  
  }
  return iFrequency;

}

int main()
{
  int iSize = 0,iRet = 0,iCnt = 0;
  int *p = NULL;

  printf("Enter Number of elements\n");
  scanf("%d",&iSize);

  p = (int *)malloc(iSize * sizeof(int));

  if(p == NULL)
  {
    printf("Unable to Allocate Memory \n");
    return -1;  
  }
  
  printf("Enter %d Elements",iSize);

  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    printf("Enter Elements [%d] : ",iCnt);  
    scanf("%d",&p[iCnt]);
  }

  iRet = CountEven(p,iSize);

  printf("Result is %d\n",iRet);

  free(p);

  return 0;  
}