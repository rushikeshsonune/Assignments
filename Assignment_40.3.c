// 40.3. write application which accepts file name from user and read all data from  file and display on screen.
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
  else
  {
    printf("File opened Sucessfully\n");
  }

  printf("Data from file : \n");
  while((iret = read(fd,data,sizeof(data))) != 0)
  {
    write(1,data,iret);
  }

  return 0;
}