// 41.3. write application which accepts file name from user and count White spaces from that file.
// Input :  Demo.txt
// Output:  

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int CountSpaces(char FileName[])
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
        if(data[i] == ' ')
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

  printf("Enter file name\n");
  scanf(" %[^'\n']s",Fname);

  iRet = CountSpaces(Fname);

  printf("Number of Spaces are %d",iRet);
  
  return 0;
}