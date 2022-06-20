// 19.3  write a program which returns addition of all element from singly linear linked list 

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

int Addition(PNODE head)
{
  int iSum = 0;

  while(head != NULL)
  {
    iSum = iSum + (head->data); 

    head = head->next; 
  }

  return iSum;
}

int main()
{
 int iRet = 0;

  PNODE first = NULL;
                                                                                         
  InsertFirst(&first,40);
  InsertFirst(&first,30);
  InsertFirst(&first,20);                                                                                       
  InsertFirst(&first,10);
  
  Display(first);

  iRet = Addition(first);
  printf("Addition of all elements is : %d\n",iRet);
}
