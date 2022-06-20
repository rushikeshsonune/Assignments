// 20.2  write a program which Display all elements which are Prime from singly linear linked list 

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

void DisplayPrime(PNODE head)
{
  int iCnt = 0,iCounter = 0;

  while(head != NULL)
  {
    iCounter = 0;

    for(iCnt=2;iCnt<(head->data);iCnt++)
    {
      if(((head->data) % iCnt) ==0)
      {
        iCounter++; 
        break;
      }
    }

    if(iCounter == 0)
    {
      printf("%d\t",head->data);  
    }

    head = head->next;
  }
}

int main()
{
 int iRet = 0;

  PNODE first = NULL;
  
  InsertFirst(&first,89);                                                                         
  InsertFirst(&first,22);
  InsertFirst(&first,41);
  InsertFirst(&first,17);                                                                                       
  InsertFirst(&first,20);
  InsertFirst(&first,11);
  
  Display(first);

  DisplayPrime(first);

  return 0;
}
