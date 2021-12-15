#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

node *head = NULL;

void caseOne(int val) //insert at head
{
	node *new_block = new node();
	new_block->data = val;

	if (head == NULL)
	{
		head = new_block;
	}

	else{

		node *temp = head;
		new_block->next = temp;
		head = new_block;

	}
}

void caseTwo(int val) //insert at tail
{
	node *new_block = new node();
	new_block->data = val;

	if(head==NULL)
	{
		head = new_block;
		new_block->next = NULL;
	}

	else{
		node *temp = head;
		while(temp->next!= NULL)
		{
			temp = temp->next;
		}

		temp->next = new_block;
		new_block->next = NULL;
	}
}

void caseThrid(int pos,int val) //insert at a position
{
	int a = pos;
	node *new_block = new node();
	new_block->data = val;

	if(head==NULL)
	{
		cout<<"The List is Empty"<<endl;
	}

	node *temp = head;
	node *prev = NULL;

	while(pos)
	{
		prev = temp;
		temp = temp->next;
		--pos;
	}

	new_block->next = temp;

	if(a==0)
		head = new_block;
	else
		prev->next = new_block;


}

void caseFour() //display linked list
{
	node *temp = head;

	if(temp==NULL)
	{
		cout<<"Empty Linked List"<<endl;
	}

	else{
		
		while(temp->next!=NULL)
		{
			cout<<temp->data<<" ";
			temp = temp->next;
		}

		cout<<temp->data<<endl;
	}
}

void caseFive(int pos) //delete a node at a position
{
	int a = pos;
	if (head==NULL)
	{
		cout<<"The List is Empty"<<endl;
	}

	node *temp = head;
	node *prev = NULL;

	while(pos)
	{
		prev = temp;
		temp = temp->next;
		--pos;
	}

	if(a==0){
		head = head->next;
	}

	else{
		prev->next = temp->next;
	}

}

int main()
{
	while(1)
	{
			int a;
			cout<<"------Menu Singly Linked List-------"<<endl;
			cout<<"1. Insert at Head"<<endl;
			cout<<"2. Insert at Tail"<<endl;
			cout<<"3. Insert at Position"<<endl;
			cout<<"4. Display Linked List"<<endl;
			cout<<"5. Delete a Node"<<endl;
			cout<<"6. Exit(0)"<<endl;
			cout<<"-----------------------"<<endl;
			cin>>a;

			switch(a)
			{
				case 1:
				{
					int a;
					cout<<"Enter the Value"<<endl;
					cin>>a;
					caseOne(a);
					break;
				}

				case 2:
				{
					int a;
					cout<<"Enter the Value"<<endl;
					cin>>a;
					caseTwo(a);
					break;
				}

				case 3:
				{
					int a,p;
					cout<<"Enter the Value"<<endl;
					cin>>a;
					cout<<"Enter the Position"<<endl;
					cin>>p;
					caseThrid(p,a);
					break;
				}

				case 4:
				{
					caseFour();
					break;
				}

				case 5:
				{
					int p;
					cout<<"Enter the Position"<<endl;
					cin>>p;
					caseFive(p);
					break;
				}

				case 6:
				{
					exit(0);
				}
			}
	}
	return 0;
}