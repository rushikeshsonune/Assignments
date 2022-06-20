// 19.4  write a program which returns Largest element from singly linear linked list 

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

int Maximum(PNODE head)
{
  PNODE temp = NULL;
  int iMax = 0;

  while(head != NULL)
  {
     if((head->data) > iMax)
     {
       iMax = head->data;  
     } 

     head = head->next; 
  }

   return iMax;
}

int main()
{
 int iRet = 0;

  PNODE first = NULL;
                                                                                         
  InsertFirst(&first,240);
  InsertFirst(&first,320);
  InsertFirst(&first,230);                                                                                       
  InsertFirst(&first,110);
  
  Display(first);

  iRet = Maximum(first);
  printf("Largest elements is : %d\n",iRet);
}
