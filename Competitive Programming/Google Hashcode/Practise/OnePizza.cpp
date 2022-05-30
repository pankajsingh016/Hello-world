#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	 freopen("../input_data/a_an_example.in.txt","r",stdin);
	//freopen("../input_data/b_basic.in.txt","r",stdin);
	freopen("../output_data/a_an_output.txt","w",stdout);
	
	int C;
	cin>>C;
	map<string,int> l;
	map<string,int> d;
	set<string> ing;

	while(C--)
	{
		int b;
		cin>>b;
		while(b--)
		{
			string s;
			cin>>s;
			l[s] += 1;
			ing.insert(s);
			s.clear();
		}

		int n;
		cin>>n;
		while(n--)
		{
			string s;
			cin>>s;
			d[s] += 1;
			ing.insert(s);
			s.clear();
		}
	}

	//filtering
	vector<string>filtered;
	set<string>::iterator itr;
	for(itr=ing.begin();itr!=ing.end();itr++)
	{		
		if(d[*itr]==0)
		{
			filtered.push_back(*itr);
		}
	}

	cout<<filtered.size()<<" ";
	for(int i=0;i<filtered.size();i++)
	{
		cout<<filtered[i]<<" ";
	}
	return 0;

}
