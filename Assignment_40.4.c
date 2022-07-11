// 40.4. write application which accepts file name from user and display size of file.
// Input :  Demo.txt
// Output:  

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
  char Fname[20];
  char data[100];
  int fd = 0,iret = 0;

  printf("Enter file name that you want to open\n");
  scanf(" %[^'\n']s",Fname);

  fd = open(Fname,O_RDONLY);
  if(fd == -1)
  {
    printf("Unable to open file \n");
  }

  iret = read(fd,data,sizeof(data));
  printf("%d bytes\n",iret);

  return 0;
}