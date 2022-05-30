#include<bits/stdc++.h>
using namespace std;

#define ll long long





int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("E:\\The Dead Promise\\input.txt","r",stdin);
	freopen("E:\\The Dead Promise\\output.txt","w",stdout);

	#else
	// online submission
	#endif
	
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int count = 0;
	for(int i=1;i<=d;i++)
	{
		if((i%k==0)||(i%l==0)||(i%m==0)||(i%n==0))
			count++;
	}
	cout<<count<<endl;
}