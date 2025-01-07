#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin>>q;
	vector<int> v;

	for(int i=0;i<q;i++)
	{
		int x;
		cin>>x;
		if(x==-1)
		{
			v.push_back(-1);
		}
		else{
			int d;
			cin>>d;
			v.push_back(d);
		}
	}

	stack<int> s;
	for(int i=0;i<v.size();i++)
	{
		if (v[i]!= -1)
		{
			s.push(v[i]);
		}

		else if(v[i]==-1 && !s.empty())
		{
			cout<<s.top()<<endl;
			s.pop();
		}

		else if(s.empty())
		{
			cout<<"kuchbhi?"<<endl;
		}
	}
	return 0;

}