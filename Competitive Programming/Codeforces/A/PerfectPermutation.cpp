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

	int n;
	cin>>n;
	int ar[n];

	for(int i=1;i<=n;i++)
	{
		ar[i-1] = i;
	}

	if(n%2==1)
	{
		cout<<"-1\n";
	}
	else{
		
		for(int i=1;i<n;i=i+2)
		{
			int tmp = ar[i];
			ar[i] = ar[i-1];
			ar[i-1] = tmp;
		}

		for(int i=0;i<n;i++)
		{
			cout<<ar[i]<<" ";
		}

	}
	return 0;

}