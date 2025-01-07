#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	deque<int> dq;
	dq.push_back(1);
	dq.push_front(2);
	dq.push_front(3);
	dq.push_back(4);

	dq.pop_back();
	dq.pop_front();

	cout<<dq.back();

	return 0;

}