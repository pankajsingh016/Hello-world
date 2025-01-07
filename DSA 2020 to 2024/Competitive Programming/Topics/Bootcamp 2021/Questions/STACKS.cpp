#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int n)
{
	ll disks[n];
	vector<ll> topstack;
	
	for(int i=0;i<n;i++)
	{
		cin>>disks[i];
	}

	for(int i=0;i<n;i++){
		auto it = upper_bound(topstack.begin(),topstack.end(),disks[i]);
		if(it==topstack.end()){
			topstack.push_back(disks[i]);
		}
		else{
			*it = disks[i];
		}
	}
	cout<<topstack.size()<<" ";
	for(ll i=0;i<topstack.size();i++)
	{
		cout<<topstack[i]<<" ";
	}
	cout<<endl;
} 

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		solve(n);
	}
	return 0;

}