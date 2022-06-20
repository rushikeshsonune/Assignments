// input :  Row = 3      Columns = 5
// Output : 
//          A   A   A   A   A
//          B   B   B   B   B
//          C   C   C   C   C



#include<stdio.h>
  
void Pattern(int iRow,int iCol)
{
   
  for(char i='A';i<('A'+iRow);i++)
  {
     for(char j=1;j<=iCol;j++)
     {
       printf("%c\t",i); 
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