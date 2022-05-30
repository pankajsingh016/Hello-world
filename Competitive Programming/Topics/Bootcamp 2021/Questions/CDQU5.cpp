#include<bits/stdc++.h>
using namespace std;

#define ll long long

int mod = 1000000000009;
int dp[100007];

int solve(int x){
	if(x==1)
	{
		return dp[x] = 0;
	}

	if(x==2 or x==3){
		return dp[x] = 1;
	}

	return (solve(x-2)%mod + solve(x-3)%mod)%mod;
}


int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	memset(dp,-1,sizeof(dp));
	solve(1000006);

	while(t--)
	{
		int x;
		cin>>x;
		cout<<dp[x]<<endl;
	}

	return 0;

}