//Program By
//UID: 20BCS6668
//Name: Pankaj Singh Kanyal

#include<iostream>
#include<vector>
using namespace std;


struct node{
	int val;
	node *left;
	node *right;
};



node *newNode(int data)
{
	node *temp = new node;
	temp->val = data;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}


node* insert(int val,node *temp){
	
	if(temp == NULL){
		temp = newNode(val);
		return temp;
	}

	if(val >= temp->val){
		temp->right = insert(val,temp->right);
	}
	else{
		temp->left = insert(val,temp->left);
	}

	return temp;
}

//-------------------------------------------------------------------

bool search(node *temp,int data){
	if(temp==NULL){
		return false;
	}

	if(temp->val == data){
		return true;
	}

	bool l = search(temp->left,data);
	if(l)
		return true;
	bool r = search(temp->right,data);
	return r;	
}

//------------------------------------------------------------------------

node *minval(node *temp){ //To Find the Mininum value in the node
	node *p = temp;
	while(p->left!=NULL){
		p = p->left;
	}
	return p;
}

node *del(node *temp,int data){

	if(temp==NULL){
		return temp;
	}

	if(temp->val > data){
		temp->left = del(temp->left, data);
	}
	else if(temp->val < data){
		temp->right = del(temp->right,data);
	}

	else{
		if(temp->left==NULL && temp->right==NULL){
			return NULL;
		}
		else if(temp->left==NULL){
			node *p = temp->right;
			delete (temp);
			return p;
		}

		else if(temp->right==NULL){
			node *p = temp->left;
			delete (temp);
			return p;
		}
		
		node *zmin = minval(temp->right); //finding the smallest element in the right subtree
		temp->val = zmin->val;	//copying the content in inorder way.
		temp->right = del(temp->right,zmin->val); 
	}
	return temp;
	
}

//-----------------------------------------------------------------------

void showpost(node*temp){
	if(temp==NULL){
		return ;
	}
	showpost(temp->left);
	showpost(temp->right);
	cout<<temp->val<<" ";
	
}

//-------------------------------------------------------------------

void showpre(node *temp){
	if(temp!=NULL)
	{
		cout<<temp->val<<" ";
		showpre(temp->left);
		showpre(temp->right);
	}
}
//-------------------------------------------------------------------
void showIn(node *temp){
	if(temp == NULL){
		return;
	}
	showIn(temp->left);
	cout<<temp->val<<" ";
	showIn(temp->right);
}

//-------------------------------------------------------------------

int main()
{
	cout<<"WECOME TO THE PROGRAM"<<endl;
	node *root = NULL;
	vector<int> ar;

	while(1){

		cout<<"\n\n<---------------MENU---------------->"<<endl;
		cout<<"1. Insert data into the tree"<<endl;
		cout<<"2. Search data into the tree"<<endl;
		cout<<"3. Delete a Node From the tree"<<endl;
		cout<<"4. Post-Order traversal"<<endl;
		cout<<"5. InOrder traversal"<<endl;
		cout<<"6. Pre-Order traversal"<<endl;
		cout<<"7. Exit"<<endl;

		cout<<"\n Choose the Option: ";
		int a;
		cin>>a;
		switch(a){

			case 1:
			{

				int n;
				ar.clear();
				cout<<"Enter the total number of values to insert"<<endl;
				cin>>n;

				for(int i=0;i<n;i++){

					int t;
					cin>>t;
					ar.push_back(t);

					if(i==0){
						root = insert(t,root);
					}
					else{
						insert(t,root);
					}
				}

				break;
			}

			case 2:
			{

				int x;
				cout<<"Enter the element to search"<<endl;
				cin>>x;

				if(search(root,x)){
					cout<<"Present in the tree"<<endl;
				}
				else{
					cout<<"Not present in the tree"<<endl;
				}

				break;
			}

			case 3:
			{

				int x;
				cout<<"Enter the value to delete"<<endl;
				cin>>x;

				root = del(root,x);
				cout<<"Process end for delting a node"<<endl;

				break;
			}	

			case 4:
			{

				cout<<"Post-Order traversal ->";
				showpost(root);
				cout<<endl;
				break;
			}

			case 5:
			{
				cout<<"In-Order traversal ->";
				showIn(root);
				cout<<endl;
				break;
			}
			case 6:
			{
				cout<<"Pre-Order traversal ->";
				showpre(root);
				cout<<endl;
				break;

			}
			case 7:
			{
				exit(0);
			}

			default:
			{
				cout<<"\n\n None of the Option is selected try again"<<endl;
				break;
			}
		}
	}
	return 0;
}
