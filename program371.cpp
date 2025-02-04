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

class DoublyCL
{
	public:
		PNODE head;
		PNODE tail;
		
		int iCount;
		
		DoublyCL()
		{
			head = NULL;
			tail = NULL;
			iCount = 0;
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
                tail = newn;
                newn->next = head;
                newn->prev = tail;
            }
            else
            {
                newn->next = head;
                newn->prev = tail;
                head->prev = newn;
                tail->next = newn;
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

            if (head == NULL)
            {
                head = newn;
                tail = newn;
                newn->next = head;
                newn->prev = tail;
            }
            else
            {
                newn->prev = tail;
                newn->next = head;
                tail->next = newn;
                head->prev = newn;
                tail = newn;
            }

            iCount++;
		}
		
		void DeleteFirst()
		{
			if (head == NULL)
            {
                cout << "List is empty\n";
                return;
            }

            if (head == tail)
            {
                delete head;
                head = NULL;
                tail = NULL;
            }
            else
            {
                PNODE temp = head;
                head = head->next;
                head->prev = tail;
                tail->next = head;
                delete temp;
            }

            iCount--;
		}
		
		void DeleteLast()
		{
			if (head == NULL)
            {
                cout << "List is empty\n";
                return;
            }

            if (head == tail)
            {
                delete head;
                head = NULL;
                tail = NULL;
            }
            else
            {
                PNODE temp = tail;
                tail = tail->prev;
                tail->next = head;
                head->prev = tail;
                delete temp;
            }

            iCount--;
		}
	
		void Display()
		{
			if (head == NULL)
            {
                cout << "List is empty\n";
                return;
            }

            PNODE temp = head;
            do
            {
              cout<<"| "<<temp->data<<" | -> ";
                temp = temp->next;
            } while (temp != head);

            cout <<"NULL\n";
		}
		
		int Count()
		{
			return iCount;
		}
		
		void InsertAtPos(int no,int ipos)
		{
			if (ipos < 1 || ipos > iCount + 1)
            {
                cout << "Invalid Position\n";
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
                temp->next->prev = newn;
                temp->next = newn;

                iCount++;
            }
		}
		
			
		void DeleteAtPos(int ipos)
		{
			if (ipos < 1 || ipos > iCount)
            {
                cout << "Invalid Position\n";
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
                temp->next->prev = temp->prev;
                delete temp;

                iCount--;
            }
		}
		
		
};

int main()
{
 DoublyCL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";
    
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    
    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";
    
    obj.InsertAtPos(75,4);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteAtPos(4);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteFirst();
    
    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";
    
    obj.DeleteLast();
    
    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";
	
	
	return 0;
}
