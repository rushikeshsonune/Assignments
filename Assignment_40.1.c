// 40.1. write application which accepts file name from user and open that file in read mode.
// Input :  Demo.txt
// Output:  File opened Sucessfully.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
  char Fname[20];
  int fd = 0;


  printf("Enter file name \n");
  scanf("%s",Fname);

  fd = creat(Fname,0777);
  if(fd == -1)
  {
    printf("Unable to create file\n");
    return -1; 
  }
  else
  {
    printf("File created Successfully \n");
  }

 printf("Enter file name that you want to open\n");
  scanf(" %[^'\n']s",Fname);

  fd = open(Fname,O_RDONLY);
  if(fd == -1)
  {
    printf("Unable to open file \n");
  }
  else
  {
    printf("File opened Sucessfully");
  }

  return 0;  
}