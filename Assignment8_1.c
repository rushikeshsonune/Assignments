//Accept N number from user and return Difference of summmation of even elemnts and summation of odd elements
// Input :    N  : 6
// Elements :  85   66  3  80  93  88
// Output :  53  (234 - 181) 

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
  int iCnt = 0;
  int iSumEven = 0;
  int iSumOdd = 0;

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
     if((Arr[iCnt] % 2)==0)
     {
       iSumEven = iSumEven + Arr[iCnt];  
     }  
     else 
     {
       iSumOdd = iSumOdd + Arr[iCnt];  
     }
  }

  return iSumEven - iSumOdd;
}


int main()
{
  int iSize = 0,iRet = 0,iCnt = 0;
  int *p = NULL;

  printf("Enter number of Elements\n");
  scanf("%d",&iSize);

  p = (int *)malloc(iSize * sizeof(int));

  if(p==NULL)
  {
    printf("Unable to allocate Memory");
    return -1;  
  }

  printf("Enter %d Elements",iSize);

  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    printf("Enter Element: %d\n",iCnt+1);
    scanf("%d",&p[iCnt]);  
  }

  iRet=Difference(p,iSize);

  printf("Result is : %d",iRet);

  free(p);

  return 0;  
}