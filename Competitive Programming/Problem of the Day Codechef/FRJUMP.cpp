#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define m 1000000007

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


	int N;
	cin>>N;
	ll cities[N+1];

	for(int i=1;i<=N;i++)
	{
		cin>>cities[i];
	}	

	int q;
	cin>>q;
	
	for(int i=0;i<q;i++)
	{
		int t;
		cin>>t;

		if(t==1)
		{
			int p,f;
			cin>>p>>f;
			cities[p+1] = f;
		}

		if(t==2)
		{
			int r;
			cin>>r;

			ll enjoyment = 1;

			int count = 1;
			for(int j=1;j<=N;count++)
			{
				enjoyment = ((enjoyment)*(cities[j]));
				j = 1+(count*r);
			}
			
			ll x1 = enjoyment;
			ll x2 =0;

			while(x1>0)
			{
				x2 = x1%10;
				x1 = x1/10;
			}

			cout<<x2<<" "<<(enjoyment)%m<<endl;
		}
	}
	fflush(stdin);
	fflush(stdout);
	return 0;

}