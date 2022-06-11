// 10.3 Accept N numbers from user and accept one another number from user as NO ,return index of Last Occurance of that NO.
//  Input :  N : 6
// N : 66
//   Elements :  85  66  11  80  66  88  
//Output : 4

#include<stdio.h>
#include<stdlib.h>
 
int LastOcc(int Arr[],int iLength,int iNo)
{
  int iCnt = 0;

  for(iCnt=iLength-1;iCnt>=0;iCnt--)
  {
    if(Arr[iCnt] == iNo)
    {
      break;  
    }
  }
    return iCnt;   
}

int main()
{
  int iCnt = 0,iSize = 0,iValue = 0;
  int *p = NULL;
  int iRet = 0;
  
  printf("Enter number of elemnts\n");
  scanf("%d",&iSize);

  p = (int*)malloc(iSize * sizeof(int));

  printf("Enter %d Elements\n",iSize);
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    printf("Enter value at [%d]\n",iCnt);
    scanf("%d",&p[iCnt]);  
  }

  printf("Enter Number to Check\n");
  scanf("%d",&iValue);

 iRet = LastOcc(p,iSize,iValue);
 
 if(iRet == -1)
 {
   printf("There is No such a Number \n");  
 }
 else
 {
 printf("Last occurrence of number is index: %d\n",iRet);
 }
 
 free(p);

 return 0;  
}