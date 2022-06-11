// 10.1  Accept N numbers from user and accept one another number from user as NO ,check whether NO is present or not .
//  Input :  N : 6
// N : 66
//   Elements :  85  66  11  80  93  88  
//Output : True.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
  int iCnt = 0;

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
        break;
    }  
  }
    
    if(iCnt == iLength)
    {
      return FALSE;  
    }
    else
    {
      return TRUE;  
    }
}


int main()
{
  int iCnt = 0,iSize = 0,iValue = 0;
  int *p = NULL;
  BOOL bRet;
  
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

 bRet = Check(p,iSize,iValue);

 if(bRet == TRUE)
 {
   printf("Number is present\n");  
 }
 else{
     printf("Number is not Present\n");
 }

 free(p);

 return 0;  
}