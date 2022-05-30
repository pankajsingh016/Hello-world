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


	int t;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;
		int nx = x-1;
		int ny = x;
		int nz = x+1;
		cout<<nx<<" "<<ny<<" "<<nz<<endl;
	}

	return 0;


}