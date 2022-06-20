// 16.4
// input :  Row = 6     Columns = 5
// Output : 
//          *    *    *    *   *
//          *    @    @    @   *
//          *    @    @    @   *
//          *    @    @    @   *
//          *    @    @    @   *
//          *    *    *    *   *



#include<stdio.h>
  
void Pattern(int iRow,int iCol)
{
  int i = 0, j = 0;
   
  for(i=1;i<=iRow;i++)
  {
     for(j=iCol;j>=1;j--)
     {
       if((i==iRow || i==1)||
          (j==iCol || j==1))
       {
        printf("*\t");   
       }
       else
       {
        printf("@\t");   
       }
       
     }  

     printf("\n");
  }
}

int main()
{
  int iValue1 = 0;
  int iValue2 = 0;

  printf("Enter Rows \n");
  scanf("%d",&iValue1);

  printf("Enter Columns \n");
  scanf("%d",&iValue2);


  Pattern(iValue1,iValue2);

  return 0;  
}