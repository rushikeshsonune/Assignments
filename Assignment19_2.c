// 19.2  write a program which search Last occurance of particulat element from singly linaer linked list 

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

int SearchLastOcc(PPNODE head,int no)
{
  int iCnt = 0,Pos = 0;
  PNODE temp = NULL;

  temp = *head;

  while(temp != NULL)
  {  
    iCnt++;

    if(temp->data == no)
     {
       Pos = iCnt; 
     }  

    temp = temp->next; 
  }

  return Pos;
}

int main()
{
 int iRet = 0,iValue = 0;

  PNODE first = NULL;
  
  InsertFirst(&first,70);  
  InsertFirst(&first,30);
  InsertFirst(&first,50);                                                                                       
  InsertFirst(&first,40);
  InsertFirst(&first,30);
  InsertFirst(&first,20);                                                                                       
  InsertFirst(&first,10);
  
  Display(first);

  printf("Enter element to search \n");
  scanf("%d",&iValue);

  iRet = SearchLastOcc(&first,iValue);
  printf("Last occurance is at position : %d\n",iRet);
}
