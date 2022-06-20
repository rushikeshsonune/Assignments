// 19.5   write a program which returns Smallest element from singly linear linked list 

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;

struct node
{
  int data;
  struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{ 
  PNODE newn = NULL;

  newn = (PNODE)malloc(sizeof(NODE));

  newn-> data=no;
  newn-> next = NULL;

  if(*head == NULL) // LL empty
  {
    *head = newn;
  }
  else  //LL contins atleast one NODE
  {
    newn->next = *head;
    *head = newn;
  }
}

void Display(PNODE head)
{
  printf("Elements from linkedList are :\n");

  while(head != NULL)
  {
    printf("| %d |->",head->data);  
    head = head->next;
  }
  printf("NULL\n");
}

int Minimum(PNODE head)
{
  PNODE temp = NULL;
  int iMin = 0;

  iMin = head->data;

  while(head != NULL)
  {
     if((head->data) < iMin)
     {
       iMin = head->data;  
     } 

     head = head->next; 
  }

   return iMin;
}

int main()
{
 int iRet = 0;

  PNODE first = NULL;
  
  InsertFirst(&first,640);                                                                         
  InsertFirst(&first,240);
  InsertFirst(&first,20);
  InsertFirst(&first,230);                                                                                       
  InsertFirst(&first,110);
  
  Display(first);

  iRet = Minimum(first);
  printf("Smallest elements is : %d\n",iRet);
}
