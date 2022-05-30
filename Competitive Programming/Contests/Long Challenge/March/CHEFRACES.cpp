#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long int
#define vi vector<int>
#define vii vector<vector<int>>


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
			int x,y,a,b;
			cin>>x>>y>>a>>b;

			int maxgold = 2;
			if(x==a||x==b)
			{
				maxgold--;
			}
			if(y==a||y==b)
			{
				maxgold--;
			}
			cout<<maxgold<<endl;

		}
	return 0;

}