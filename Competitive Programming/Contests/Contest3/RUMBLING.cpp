#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll const N = 2e5 + 2;
ll w[N];
ll e[N];

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		string s;
		ll x,y;
		cin>>n;
		cin>>s;
		cin>>x>>y;

		for(int i=1;i<= n;i++)
		{
			if(s[i-1] == 'N'){
				w[i] = min(y,3*x);
				e[i] = min(x,3*y);
			}

			if(s[i-1]=='S'){
				w[i] = min(x,3*y);
				e[i] = min(y,3*x);
			}
			if(s[i-1]=='W'){
				w[i] = 0;
				e[i] = 2* min(x,y);
			}

			if(s[i-1]=='E'){
				w[i] = 2 * min(x,y);
				e[i] = 0;
			}
		}

		for(int i=2;i<=n;i++)
			e[i] = e[i] + e[i-1];

		for(int i=n-1;i>=1;i--)
			w[i] = w[i] + w[i+1];

		ll ans = min(w[1],e[n]);

		for(int i=1;i<n;i++)
		{
			ll cost = e[i] + w[i+1];
			ans = min(ans,cost);
		}

		cout<<ans<<endl;

	}
	return 0;

}