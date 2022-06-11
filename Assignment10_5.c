// 10.5  Accept N numbers from user and return product of all Odd elements.
//  Input :  N : 6
//   Elements :  15  66  3  70  10  88 
//Output :  45

#include<stdio.h>
#include<stdlib.h>
 
int Product(int Arr[],int iLength)
{
  int iCnt = 0;
  int iMult = 1;
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
     if(((Arr[iCnt]) % 2) != 0)
     {
       iMult = iMult * Arr[iCnt];  
     }
  }

    return iMult;
}

int main()
{
  int iCnt = 0,iSize = 0;
  int *p = NULL;
  int iRet = 0;
  
  printf("Enter number of elemnts\n");
  scanf("%d",&iSize);

  p = (int*)malloc(iSize * sizeof(int));

  if(p == NULL)
  {
    printf("Unable to Allocate Memory \n");
    return -1;  
  }

  printf("Enter %d Elements\n",iSize);
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    printf("Enter value at [%d]\n",iCnt);
    scanf("%d",&p[iCnt]);  
  }

  iRet = Product(p,iSize);

  if(iRet == 0)
  {
    printf("No Odd elements \n");  
  }
  else
  {
    printf("Product is : %d\n",iRet);  
  }
 
   free(p);

   return 0;  
}