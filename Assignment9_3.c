// 9.3 Accept N numbers from user and check wheather number contains 11 in it or Not.
//  Input :  N : 6
//   Elements :  85  66  11  80  93  88  
//Output : 11 is present

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL check(int Arr[],int iLength)
{
  int iCnt = 0;

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt] == 11)
    {
       break;
    }  
    if(iCnt == iLength)
    {
      return TRUE;  
    }
    else
    {
      return FALSE;  
    }

  }

}

int main()
{
  int iSize = 0,iCnt = 0;
  int *p = NULL;
 BOOL bRet = FALSE;

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

  bRet = check(p,iSize);

 if(bRet == TRUE)
 {
    printf("11 is present\n");
 }
 else
 {
   printf("11 is Not Present\n");  
 }

  free(p);

  return 0;  
}