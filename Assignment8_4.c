// 8.4 Accept N numbers From User and Display such elements which Are  Divisible by 3 and 5.
// Input :    N  : 6
// Elements :  85   66  3  15  93  88
// Output :  15

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
  int iCnt = 0;

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if((((Arr[iCnt])%3) ==0)&&
       (Arr[iCnt] % 5)==0)
    {
      printf("\n%d\t",Arr[iCnt]);  
    }
  }
}

int  main()
{
  int iSize = 0,iCnt = 0;
  int *p = NULL;

  printf("Enter number of Elements\n");
  scanf("%d",&iSize);

  p = (int *)malloc(iSize * sizeof(int));

  if(p==NULL)
  {
    printf("Unable to allocate Memory");
    return -1;  
  }

  printf("Enter %d Elements\n",iSize);

  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    printf("Enter Element: %d\n",iCnt+1);
    scanf("%d",&p[iCnt]);  
  }

  Display(p,iSize);

  free(p);

  return 0;  
}