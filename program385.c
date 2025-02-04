#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
}NODE,*PNODE,**PPNODE;


void Insert(PPNODE head,int no)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	
	newn =(PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->lchild = NULL;
	newn->rchild = NULL;
      
    if(*head == NULL) //tree is empty
	  {
	 	*head = NULL;
	  } 
	else  //tree contains atleast one node
	  {
	  temp = *head;
	  
	  while(1)
	  {
	  	if(no > temp->data)  //greater
	  	{
	  		if(temp->rchild == NULL)
	  		{
	  			temp->rchild = newn;
	  			break;
			  }
			  temp = temp -> rchild;
		}
		else if(no < temp->data) //smaller
		{
				if(temp->lchild  == NULL)
	  		{
	  			temp->rchild = newn;
	  			break;
			  }
			  temp = temp ->lchild;
		}
		else if(no == temp->data) //identical
		{
			printf("unable to insert as element is duplicates:\n");
			free(newn);
			break;
		}
	  
	  }
	  
	}

}

void Inorder(PNODE head)
{
	if(head != NULL)
	{
		Inorder(head->lchild);
		printf("%d\n",head->data);
		Inorder(head->rchild );
	}
}

int main()
{
    PNODE first = NULL;
    
     Insert(&first,51);
     Insert(&first,21);
     Insert(&first,101);
     
     Inorder(first);
     
     
return 0;

	
}