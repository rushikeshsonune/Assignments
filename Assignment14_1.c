// input :  Row = 4      Columns = 4
// Output : 
//           A     B     C      D
//           A     B     C      D
//           A     B     C      D
//           A     B     C      D
         
 
#include<stdio.h>
  
void Pattern(int iRow,int iCol)
{
  int i = 0,j = 0;
   
  for(i=1;i<=iRow;i++)
  {
     for(j='A';j<('A'+iCol);j++)
     {
       printf("%c\t",j);  
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