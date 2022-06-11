// 11.1  Accept N numbers from user and return the Largest number.
//  Input :  N : 6
//   Elements :  85  66  11  80  93  88  
//Output : 93

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
  int iCnt = 0,iMax = Arr[0];

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt] > iMax)
    {
      iMax = Arr[iCnt];  
    }
  }

   return iMax;
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

 iRet = Maximum(p,iSize);

 printf("Largest Number is : %d\n",iRet);

 free(p);

 return 0;  
}