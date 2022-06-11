// 11.4  Accept N numbers from user and Display all Such numbers which contains 3 digits in it .
//  Input :  N : 6
//   Elements :  8225  665  3  76  953  858  
//Output : 665   953   858

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
  int iCnt = 0,iNo = 0,iDigitCnt = 0;
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    iNo = Arr[iCnt];

    while(iNo != 0) 
    { 
      iDigitCnt++;
      iNo = iNo / 10;
    }
    if(iDigitCnt == 3)
    {
      printf("%d\t",Arr[iCnt]);  
    } 
    iDigitCnt = 0;
    
  }
}

int main()
{
  int iCnt = 0,iSize = 0;
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

  Digits(p,iSize);

  free(p);

  return 0;  
}