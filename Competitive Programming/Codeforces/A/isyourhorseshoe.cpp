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

	vector<ll>ar(4);
	for(int i=0;i<4;i++)
	{
		cin>>ar[i];
	}
	int rep = 0;

	sort(ar.begin(),ar.end());

	for(int i=1;i<4;i++)
	{
		if(ar[i-1]==ar[i]){
			rep++;
		}
	}
	
	cout<<rep<<endl;

	return 0;

}