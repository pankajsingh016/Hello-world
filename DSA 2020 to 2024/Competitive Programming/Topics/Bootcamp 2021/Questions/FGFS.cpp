#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
	int n,k;
	cin>>n>>k;
	map<int,set<pair<int,int>>> data;
	for(int i=0;i<n;i++)
	{
		int s,f,p;
		cin>>s>>f>>p;
		data[p].insert({f,s});
	}

	int ans = 0;
	for(auto x:data){
		int prevEndTime = 0;
		for(auto pairs: x.second){
			
			if(pairs.second >= prevEndTime){
				ans++;
				prevEndTime = pairs.first;
			}
		}
	}
	cout<<ans<<endl;
}


int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;

	while(t--)
	{
		solve();
	}
	return 0;

}