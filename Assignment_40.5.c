// 40.5. write application which accepts file name from user and one string from user.write that string at end of file.
// Input :  Demo.txt
// Output:  

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int main()
{
  char Fname[20];
  char data[10];
  int fd = 0,iret = 0;

  printf("Enter file name that you want to open\n");
  scanf(" %[^'\n']s",Fname);

  fd = open(Fname,O_RDWR | O_APPEND);
  if(fd == -1)
  {
    printf("Unable to open file \n");
  }

  printf("Enter String\n");
  scanf(" %[^'\n']s",data);

  iret = write(fd,data,strlen(data));

  printf("%d bytes written ",iret);
  
  return 0;
}