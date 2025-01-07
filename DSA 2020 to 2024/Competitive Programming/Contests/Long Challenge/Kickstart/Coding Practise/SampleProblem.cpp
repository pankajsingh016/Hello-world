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

	for(int j=1;j<=t;j++){
		int n,m;
		cin>>n>>m;

		int sum = 0;
		vector<int>c(n);
		for(int i=0;i<n;i++){
			cin>>c[i];
			sum += c[i];
		}
		int y = sum%m;
		printf("Case #%d: %d\n",j,y);
	}


	return 0;

}