// 41.4. write application which accepts file name from user and one character from user 
//        and count number of occurances of that character from that file.
//
// Input :  Demo.txt  'M'
// Output:  7

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<conio.h>

#define FILESIZE 1024

int CountChar(char FileName[],char CValue)
{
  int fd = 0,iRet = 0,i = 0,iCnt = 0;
  char data[FILESIZE];

  fd = open(FileName,O_RDONLY);
  if(fd == -1)
  {
    printf("unable to open \n");
    return -1;
  }

   while((iRet = read(fd,data,FILESIZE)) != 0)
   {
      for(i=0;i<=iRet;i++)
      {
        if(data[i] == CValue)
        {
          iCnt++;  
        }
      }
   }
   
   close(fd);
   
   return iCnt;
}

int main()
{
  char Fname[20];
  int iRet = 0;
  char cValue;

  puts("Enter file name\n");
  gets(Fname);

  printf("Enter Character\n");
  scanf("%c",&cValue);

  iRet = CountChar(Fname,cValue);

  printf("Frequency is : %d",iRet);
  
  return 0;
}