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
			int l;
			cin>>l;
			ll count=0;
			string s;
			cin>>s;
			for(int i=0;i<l;i++)
			{
				if(s[i]=='1')
				{
					count += 1;
				}
			}
			ll ans = count*(count+1)/2;
			cout<<ans<<endl;

		}
	return 0;

}