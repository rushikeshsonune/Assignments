// 11.5 Accept N numbers from user and Display Summation of Digits of  all  numbers.
//  Input :  N : 6
//   Elements :  8225  665  3  76  953  858  
//Output : 17  17  3  13  17  21

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iLength)
{
  int iCnt = 0,iNo = 0,iDigit = 0 ,iSum= 0;
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    iNo = Arr[iCnt];

    while(iNo != 0) 
    { 
      iDigit = iNo % 10;

      iSum = iSum + iDigit; 
      
      iNo = iNo / 10;
    }
    printf("Summmation is : %d\t",iSum); 
   
    iSum = 0;
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

  DigitsSum(p,iSize);

  free(p);

  return 0;  
}