// 20.5  write a program which Display Addition of digits of element from singly linear linked list 

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

void SumDigit(PNODE head)
{
  int iDigit = 0,iSum = 0;
  while(head != NULL)
  {
    iSum = 0;
    
    while((head->data) != 0)
    {
      iDigit = (head->data) % 10;

      iSum = iSum + iDigit;  

      (head->data) = (head->data) / 10;
    }
    
    printf("%d\t",iSum);

    head = head->next;
  }
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

  SumDigit(first);

  return 0;
}
