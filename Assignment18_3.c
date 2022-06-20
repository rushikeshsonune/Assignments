 // 18.3  Accept number of Rows and Columns from user and display below pattern.
//  Input :  Rows = 6      Columns = 6
//  Output :
//           *  *   *   *   *   *
//           *              *   *
//           *          *       *
//           *      *           *
//           *  *               *
//           *  *   *   *   *   *

#include<stdio.h>

void Display(int iRow,int iCol)
{
  int i = 0,j = 0;

  for(i=1;i<=iRow;i++)
  {
     for(j=iCol;j>=1;j--)
     {
        if((i==1)||(j==1)
        ||(i==iRow)||(j==iCol)
        ||(i==j))
        {
          printf("*\t");  
        }
        else
        {
          printf(" \t");  
        }
     }
    printf("\n");
  }

}

int main()
{
  int iValue1 = 0,iValue2 = 0;

  printf("Enter Rows\n");
  scanf("%d",&iValue1);  

  printf("Enter Columns\n");
  scanf("%d",&iValue2);  

  Display(iValue1,iValue2);

  return 0;
}