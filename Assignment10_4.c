// 10.4  Accept N numbers from user and accept Range, Display all ements from that range.
//  Input :  N : 6
//   Start : 60
//   End  :  90
//   Elements :  85  66  3  76  80  66  88  
//Output : 66   76   88

#include<stdio.h>
#include<stdlib.h>
 
void Range(int Arr[],int iLength,int iNo1,int iNo2)
{
  int iCnt = 0;
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if((Arr[iCnt] > iNo1)&&
      (Arr[iCnt] < iNo2))
      {
        printf("%d\t",Arr[iCnt]);  
      }  
  }

}

int main()
{
  int iCnt = 0,iSize = 0,iValue1 = 0,iValue2 = 0;
  int *p = NULL;
  int iRet = 0;
  
  printf("Enter number of elemnts\n");
  scanf("%d",&iSize);

  p = (int*)malloc(iSize * sizeof(int));

   printf("Enter Starting point\n");
  scanf("%d",&iValue1);

   printf("Enter Ending point \n");
  scanf("%d",&iValue2);

  printf("Enter %d Elements\n",iSize);
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    printf("Enter value at [%d]\n",iCnt);
    scanf("%d",&p[iCnt]);  
  }

   Range(p,iSize,iValue1,iValue2);
 
   free(p);

   return 0;  
}