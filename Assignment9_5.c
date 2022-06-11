//Accept N numbers from user and Accept one Another Number as NO, return frequency of NO from it.
//  Input :  N : 6
//   Elements :  85  66  3  66  93  88
//Output :  2

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
  int iCnt = 0;
  int iFrequency = 0;

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
      iFrequency++;  
    }
  }
  return iFrequency;

}

int main()
{
  int iSize = 0,iRet = 0,NO = 0,iCnt = 0;
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

  printf("Enter Number to search\n");
  scanf("%d",&NO);

  iRet = Frequency(p,iSize,NO);

  printf("Frequncy is: %d\n",iRet);

  free(p);

  return 0;  
}