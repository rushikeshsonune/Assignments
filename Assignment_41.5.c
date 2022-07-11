// 41.5. write application which accepts file name from user and one count from user 
//        and read that number of characters from starting position.
//
// Input :  Demo.txt  12
// Output:  Display first 12 characters from Demo.txt

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int DisplayN(char FileName[],int Value)
{
  int fd = 0,iRet = 0,i = 0,iCnt = 0;
  char Data[Value];

  fd = open(FileName,O_RDONLY);
  if(fd == -1)
  {
    printf("unable to open \n");
    return -1;
  }

  lseek(fd,0,0);

  read(fd,Data,Value);

  write(1,Data,Value);  
}

int main()
{
  char Fname[20];
  int iValue = 0;

  puts("Enter file name\n");
  gets(Fname);

  printf("Enter Number\n");
  scanf("%d",&iValue);

  DisplayN(Fname,iValue);
  
  return 0;
}