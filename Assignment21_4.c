// 21.4  write a program which Display smallest digits of all element from singly linear linked list 

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

void DisplaySmall(PNODE head)
{
  int iDigit = 0,iSmall = 0;

  while(head != NULL)
  {
    iSmall = head->data;

    while((head->data) != 0)
    {
      iDigit = (head->data) % 10;

      (head->data) = (head->data) / 10;
      
      if(iSmall > iDigit)
      {
        iSmall = iDigit;  
      }
       // printf("%d\t",iDigit); 
    }
      printf("%d\t",iSmall);

     head = head->next; 
  }
  
} 

int main()
{
 int iRet = 0;

  PNODE first = NULL;

  InsertFirst(&first,415);
  InsertFirst(&first,532);                                                                                       
  InsertFirst(&first,250);
  InsertFirst(&first,11);
  
  Display(first);

  DisplaySmall(first);

  return 0;
}
