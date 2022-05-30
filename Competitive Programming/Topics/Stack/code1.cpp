#include<iostream>
#include<stack>

using namespace std;

int main()
{
	// Stack is a LIFO approach "Last In First Out"
	//push -> To push a data into the stack
	//pop -> To remove the top element from the stack
	//top -> To get the top element from the stack

	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	// s.pop();
	// s.pop();
	// s.pop();
	// s.pop();
	//cout<<s.top()<<endl;
	//cout<<s.size()<<endl;
	//cout<<s.top()<<endl;

	//iterate the stack
	while(!s.empty())
	{
		int data = s.top();
		cout<<data<<" ";
		s.pop();
	}

	if(s.empty()){
		cout<<"Stack is Empty";
	}
	
	else{
		cout<<"Stack is not Empty";
	}
	return 0;
}