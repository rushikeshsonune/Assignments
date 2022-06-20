// input :  Row = 5     Columns = 5
// Output : 
//          a   b   c   d   e
//          1   2   3   4   5
//          a   b   c   d   e
//          1   2   3   4   5
//          a   b   c   d   e

#include<stdio.h>
  
void Pattern(int iRow,int iCol)
{
  int i = 0,j = 0,iCnt = 0;
  
  for(i=1;i<=iRow;i++)
  { 
    iCnt=0;
    for(j='a';j<('a'+iCol);j++)
    { 
       iCnt++;

       if((i%2)!=0)
       {
      printf("%c\t",j);
       }
       else
       {
      printf("%d\t",iCnt);
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