// 21.3  write a program which Display product of all element from singly linear linked list 

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

void DisplayProduct(PNODE head)
{
  int iDigit = 0,iMult = 0,temp = 0;

  while(head != NULL)
  {
    iMult = 1;
    while((head->data) != 0)
    {

      iDigit = (head->data) % 10;

      (head->data) = (head->data) / 10;

      if(iDigit == 0)
      {
        iDigit++;  
      }

      iMult = iMult * iDigit;   
    }
     printf("%d\t",iMult);

     head = head->next; 
  }
  
} 

int main()
{
 int iRet = 0;

  PNODE first = NULL;

  InsertFirst(&first,41);
  InsertFirst(&first,32);                                                                                       
  InsertFirst(&first,20);
  InsertFirst(&first,11);
  
  Display(first);

  DisplayProduct(first);

  return 0;
}
