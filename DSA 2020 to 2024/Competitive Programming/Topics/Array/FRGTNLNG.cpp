#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin>>T;
	while(T--)
	{
		int N,K;
		cin>>N>>K;
		
		map<string,int> mark;
		string w[N];
		
		for(int i=0;i<N;i++)
		{
			cin>>w[i];	
		}

		while(K--)
		{
			int p;
			cin>>p;
			while(p--)
			{
				string m;
				cin>>m;
				mark[m] = 1;				
			}
		}

		for(int i=0;i<N;i++)
		{
			if(mark[w[i]]==1)
			{
				cout<<"Yes ";
			}
			else{
				cout<<"No ";
			}
		}
		cout<<endl;
	}
	return 0;

}