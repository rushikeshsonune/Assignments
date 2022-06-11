// 9.2 Accept N numbers from user and return Difference between frequency of even number and odd numbers.
//  Input :  N : 7
//   Elements :  85  66  3  80  93  88  90
//Output :  1  (4-3)

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
  int iCnt = 0;
  int iEvenFrequency = 0;
  int iOddFrequency = 0;

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if((Arr[iCnt] % 2)==0)
    {
      iEvenFrequency++;  
    }
    else 
    {
      iOddFrequency++;
    } 
  }
  return iEvenFrequency - iOddFrequency;

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
  
  printf("Enter %d Elements\n",iSize);

  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    printf("Enter Elements [%d] : ",iCnt);  
    scanf("%d",&p[iCnt]);
  }

  iRet = Frequency(p,iSize);

  printf("%d\n",iRet);

  free(p);

  return 0;  
}