#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	/*
	> Each value will have a value
	> Element resides in  order of their priorty
	> During insertion if the element have the higher priority then the element will come forward
	> Data will get arranged itself in that priority queue.
	push()
	pop()
	top()
	*/

	priority_queue<int> pq; //by default a max heap
	priority_queue<int,vector<int>,greater<int>> minheap;
	pq.push(1);
	pq.push(2);
	pq.push(3);
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}

	
	return 0;

}