// 40.2. write application which accepts file name from user and create that file.
// Input :  Demo.txt
// Output:  File created Sucessfully.

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

  return 0;
}