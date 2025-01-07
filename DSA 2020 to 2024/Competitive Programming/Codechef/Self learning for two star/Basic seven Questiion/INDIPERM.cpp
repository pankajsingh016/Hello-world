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
			int n;
			cin>>n;

			int ar[n];
			for(int i=1;i<=n-1;i++)
			{
				ar[i-1] = i+1;
			}

			ar[n-1] = 1;

			for(int i=0;i<n;i++){
				cout<<ar[i]<<" ";
			}
			cout<<endl;
		}
	return 0;

}