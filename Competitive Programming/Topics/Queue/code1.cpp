#include<iostream>
#include<queue>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);

	//First In First Out
	//push() >insert
	//pop() > delete data from front
	//size() > size of the queue
	//back() > rear end of the queue
	//empty() > check the queue is empty or not

	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	//cout<<q.size();
	q.pop();
	cout<<q.front()<<endl;
	cout<<q.back()<<endl;
	cout<<q.size()<<endl;

	return 0;

}