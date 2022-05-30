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

			string ans = "";

			ans = ans + "3";

			for(int i=0;i<n-2;i++){
				ans = ans + "0";
			}

			if(n>1)
			ans = ans + "3";

			cout<<ans<<endl;
			ans.clear();
		}
	return 0;

}