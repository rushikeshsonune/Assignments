// 11.3   Accept N numbers from user and return Diffrenece between Largest and Smallest number.
//  Input :  N : 6
//   Elements :  85  66  3  66  93  88  
//Output : 90  (93-3)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
  int iCnt = 0,iMin = Arr[0],iMax = Arr[0];

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt] > iMax)
    {
      iMax = Arr[iCnt]; 
    }
    else if(Arr[iCnt] < iMin)
    {
      iMin = Arr[iCnt];  
    }
  }

   return iMax - iMin;
}

int main()
{
  int iCnt = 0,iSize = 0,iRet = 0;
  int *p = NULL;
  
  printf("Enter number of elemnts\n");
  scanf("%d",&iSize);

  p = (int*)malloc(iSize * sizeof(int));

  printf("Enter %d Elements\n",iSize);
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    printf("Enter value at [%d]\n",iCnt);
    scanf("%d",&p[iCnt]);  
  }

 iRet = Difference(p,iSize);

 printf("Difference is : %d\n",iRet);

 free(p);

 return 0;  
}