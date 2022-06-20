// 21.1  write a program which reverse each element from singly linear linked list 

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

void Reverse(PNODE head)
{
  int iDigit = 0,iRev = 0;
  while(head != NULL)
  {
    iRev = 0;

    while((head->data) != 0)
    {
      iDigit = (head->data) % 10; 

      (head->data) = (head->data) / 10;
    
      iRev = iDigit + (10 * iRev);
      
    }
    
    printf("| %d |->",iRev);
    
    head = head->next;
  }
  printf("NULL\n");
}

int main()
{
 int iRet = 0;

  PNODE first = NULL;
  
  InsertFirst(&first,89);                                                                         
  InsertFirst(&first,6);
  InsertFirst(&first,41);
  InsertFirst(&first,17);                                                                                       
  InsertFirst(&first,28);
  InsertFirst(&first,11);
  
  Display(first);

  Reverse(first);

  return 0;
}
