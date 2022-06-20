// 22.5  Accept division of students from user and depends on th e division display exam timing
//       there are 4 divisions in school as A,B,C,D exam of division A at 7am , B at 8:30am , C at 9:20am ,D at 10:30am.
//       (Application should be case sensitive)
//  

#include<stdio.h>

void displaySchedule(char ch)
{
   switch(ch)
   {
     case 'A':
        printf("Your Exam at 7 AM\n");
        break;  

     case 'B':
        printf("Your Exam at 8:30 AM\n");
        break; 

     case 'C':
        printf("Your Exam at 9:20 AM\n");
        break; 

     case 'D':
        printf("Your Exam at 10:30 AM\n");
        break; 

    default:
        printf("You Entered wrong Division\n"); 
   }
}

int main()
{
  char cValue = '\0';

  printf("Enter Your Division \n");
  scanf("%c",&cValue);

  displaySchedule(cValue);

  return 0;   
}
