#include<iostream>
using namespace std;

struct node 
{
	int data;
	struct node *next;
	struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
	public :
		PNODE head;
		int iCount;
		
		DoublyLL()
		{
			head = NULL;
			iCount = 0;
		}
		
		void Display()
		{
			if (head == NULL)
            {
                cout << "List is empty.";
                return;
            }
            
            PNODE temp = head;
            cout << "Elements in the list: ";
            while (temp != NULL)
            {
                cout << temp->data << " <=>";
                temp = temp->next;
            }
            cout << "NULL\n";
		}
		
		int Count()
		{
			return iCount;
		}
		
		void InsertFirst(int no)
		{
			PNODE newn = new NODE;
            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if (head == NULL)  
            {
                head = newn;
            }
            else
            {
                newn->next = head;
                head->prev = newn;
                head = newn;
            }

            iCount++;
		}
		
		void InsertLast(int no)
		{
			 PNODE newn = new NODE;
            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            if (head == NULL)  // Empty list
            {
                head = newn;
            }
            else
            {
                PNODE temp = head;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }

                temp->next = newn;
                newn->prev = temp;
            }

            iCount++;
		}
		
		void InsertAtPos(int no,int ipos)
		{
			if (ipos < 1 || ipos > iCount + 1)
            {
                cout << "Invalid position";
                return;
            }

            if (ipos == 1)
            {
                InsertFirst(no);
            }
            else if (ipos == iCount + 1)
            {
                InsertLast(no);
            }
            else
            {
                PNODE newn = new NODE;
                newn->data = no;
                newn->next = NULL;
                newn->prev = NULL;

                PNODE temp = head;
                for (int i = 1; i < ipos - 1; i++)
                {
                    temp = temp->next;
                }

                newn->next = temp->next;
                newn->prev = temp;
                if (temp->next != NULL)
                {
                    temp->next->prev = newn;
                }
                temp->next = newn;

                iCount++;
            }
		}
		
		void DeleteFirst()
		{
			if (head == NULL)  
            {
                return;
            }

            PNODE temp = head;
            head = head->next;
            if (head != NULL)
            {
                head->prev = NULL;
            }

            delete temp;
            iCount--;
		}
		
		void DeleteLast()
		{
			 if (head == NULL)  // Empty list
            {
                return;
            }

            if (head->next == NULL)  // Only one node
            {
                delete head;
                head = NULL;
            }
            else
            {
                PNODE temp = head;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }

                temp->prev->next = NULL;
                delete temp;
            }

            iCount--;
        }
			
		void DeleteAtPos(int ipos)
		{
			 if (ipos < 1 || ipos > iCount)
            {
                cout << "Invalid position" << endl;
                return;
            }

            if (ipos == 1)
            {
                DeleteFirst();
            }
            else if (ipos == iCount)
            {
                DeleteLast();
            }
            else
            {
                PNODE temp = head;
                for (int i = 1; i < ipos; i++)
                {
                    temp = temp->next;
                }

                temp->prev->next = temp->next;
                if (temp->next != NULL)
                {
                    temp->next->prev = temp->prev;
                }

                delete temp;
                iCount--;
            }
		}
};

int main()
{
	DoublyLL dobj;
    int iRet = 0;
    
    
    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    
    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of elements are: " << iRet << "\n";
   
    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);
    
    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of elements are: " << iRet << "\n";
    
    dobj.InsertAtPos(75, 4);
    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of elements are: " << iRet << "\n";
    
    
    dobj.DeleteFirst();
    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of elements are: " << iRet << "\n";
    
    dobj.DeleteLast();
    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of elements are: " << iRet << "\n";
    
    dobj.DeleteAtPos(4);
    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of elements are: " << iRet << "\n";
	
	
	
  return 0;

} 