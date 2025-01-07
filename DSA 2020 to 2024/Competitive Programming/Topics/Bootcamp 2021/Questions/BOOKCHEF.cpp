#include<bits/stdc++.h>
using namespace std;

bool Comp(pair<int,string> a, pair<int,string> b)
{
	return a.first > b.first;
}

int main()
{
	int n,m;
	cin>>n>>m;

	vector <int> a(n);

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	vector<pair<int,string>> fs;
	vector<pair<int,string>> special;
	for(int i=0;i<=m;i++)
	{
		int y;
		int x;
		string t;

		cin>>y>>x>>t;

		if(find(a.begin(),a.end(),y)!=a.end()){
			special.push_back(make_pair(x,t));
		}

		else{
		fs.push_back(make_pair(x,t));
		}
	}

	sort(special.begin(),special.end(),Comp);
	sort(fs.begin(),fs.end(),Comp);

	for(int i=0;i<special.size();i++){
		cout<<special[i].second<<endl;
	}

	for(int i=0;i<fs.size();i++)
	{
		cout<<fs[i].second<<endl;
	}

	return 0;
}