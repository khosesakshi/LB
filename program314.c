#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int no) {
	PNODE newn = NULL;

	newn=(PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;

	if(*head == NULL) {
		*head = newn;
	} else {
		newn->next = *head;
		*head = newn;
	}
}

void InsertLast(PPNODE head,int no) {
	PNODE newn = NULL;
	PNODE temp = NULL;

	newn=(PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;

	if(*head == NULL) {
		*head = newn;
	} else {
		temp = *head;

		while(temp -> next != NULL) {
			temp = temp->next;
		}
		temp->next = newn;

	}
}

void Display(PNODE head) {
	printf("elements of linkedlist are\n");

	while(head != NULL) {
		printf("| %d |->",head->data);
		head = head -> next;
	}
	printf("NULL\n");
}

int Count(PNODE head) {
	int iCount = 0;

	while(head != NULL) {
		iCount++;
		head = head -> next;
	}
	return iCount;
}

void DeleteFirst(PPNODE head) {
	PNODE temp = NULL;

	if(*head == NULL) {
		return;
	}
	if((*head) -> next == NULL) {
		free(*head);
		*head = NULL;
	} else {
		temp = *head;
		*head = (*head) -> next;
		free(temp);
	}

}

void DeleteLast(PPNODE head) {
	PNODE temp = NULL;

	if(*head == NULL) {
		return;
	}
	if((*head) -> next == NULL) {
		free(*head);
		*head = NULL;
	} else {
		temp = *head;

		while(temp -> next->next != NULL) {
			temp = temp -> next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void InsertAtPos(PPNODE head,int no,int iPos) {
	int CountNode = 0;

	CountNode = Count(*head);

	if((iPos < 1) || (iPos > CountNode+1))
	 { //filter
		printf("invalid position:\n");
		return;
	}

	if(iPos == 1) 
	{					//pos == 1
		InsertFirst(head,no);
	} 
	else if(iPos == CountNode + 1) 
	{	
		InsertLast(head,no);
	} 
	else
	{						// In between position

	}
}

void DeleteAtPos(PPNODE head,int iPos) 
{
	int CountNode = 0;

	CountNode = Count(*head);

	if((iPos < 1) || (iPos > CountNode)) 
	{ //filter
		printf("invalid position:\n");
		return;
	}

	if(iPos == 1) 
	{					//pos == 1
		DeleteFirst(head);
	} 
	else if(iPos == CountNode)
	{	//pos == Last
		DeleteLast(head);
	} 
	else
	{						// In between position

	}
}

int main() 
{
	PNODE first = NULL;
	int iRet = 0;

	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);

	InsertLast(&first,101);
	InsertLast(&first,111);
	InsertLast(&first,121);

	Display(first);
	iRet = Count(first);
	printf("number of elements are :%d\n",iRet);

	DeleteFirst(&first);

	Display(first);
	iRet = Count(first);
	printf("number of elements are :%d\n",iRet);

	DeleteLast(&first);

	Display(first);
	iRet = Count(first);
	printf("number of elements are :%d\n",iRet);

	return 0;
}
