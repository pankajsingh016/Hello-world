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
			ll n,x;
			cin>>n>>x;
			int sr = 0;
			for(int i=0;i<n;i++)
			{
				int s,r;
				cin>>s>>r;
				if(x>=s){
					if(sr<r){
						sr = r;
					}
				}

			}
			cout<<sr<<endl;

		}
	return 0;

}