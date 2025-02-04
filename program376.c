#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

void push(PPNODE head,int no) //InsertFirst
{
	PNODE newn = NULL;
	
	newn =(PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
	
	newn->next = *head;
	*head = newn;
    }
}

int pop(PPNODE head) //DeleteFirst
{
	int no = -1;
	PNODE temp = NULL;
	
	if(*head == NULL)   //empty
	{
		printf("stack is empty:\n");
	
	}
	else if((*head)->next == NULL)  //single node
	{
		no = (*head)->data;
		free(*head);
		*head = NULL;
	}
	else  //more than one
	{
		no = (*head)->data;
		temp = *head;
		*head = (*head) -> next;
		free(temp);
	}
    return no;
}

void Display(PNODE head)
{
	printf("elements of stack are:\n");
	
	while(head != NULL)
	{
		printf(" | %d |\n",head->data);
		head = head->next;
	}
}

int Count(PNODE head)
{
	int iCount = 0;
	
	while(head != NULL)
	{
	    iCount++;
		head = head->next;
	}
	return iCount;
	
}


int main()
{
	
PNODE first=NULL;
int iRet = 0;	
	
	push(&first , 101);
	push(&first , 51);
	push(&first , 21);
	push(&first , 11);
	
	Display(first);
	
	iRet = pop(&first);
	printf("poped element is :%d\n",iRet);
	
	Display(first);
		
	iRet = pop(&first);
	printf("poped element is :%d\n",iRet);
	
	Display(first);
		
	iRet = Count(first);
	printf("Number of elements is :%d\n",iRet);
	
	return 0;
}